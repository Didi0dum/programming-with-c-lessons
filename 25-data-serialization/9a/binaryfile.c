#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

#define PATIENT_COUNT 3

int main(void) {

  Patient patients[PATIENT_COUNT] = {
    {.name = "Ivan Ivanov", .EGN = 23423423, .age = 23, .symptoms = "I have a headache"},
    {.name = "Nikoleta Marinova", .EGN = 12321312, .age = 42, .symptoms = "I have a stomache"},
    {.name = "Stoyan Georgiev", .EGN = 43242341, .age = 52, .symptoms = "I have a backpain"}
  };

  LinkedList list = init();
  pushBack(&list, patients[0]);
  pushBack(&list, patients[1]);
  pushBack(&list, patients[2]);

  FILE * file = fopen("patients.bin", "wb");
  assertFileOpen(file);

  for (int i = 0; i < 3; i++) {
    struct ListNode * node = getElement(&list, i);

    //Wrong: because node has pointer, and because of padding
    fwrite(node, sizeof(struct ListNode), 1, file);

    //Example binary serialization format for each patient in the list
    //1 - index of the node - int
    //2 - name of the patient - string
    //3 - egn of the patient - long
    //4 - age of the patient - int
    //5 - symptoms - string

    fwrite(&i, sizeof(int), 1, file);

    Patient patient = node->value;
    fwrite(patient.name, sizeof(char), PATIENT_NAME_MAX_LENGTH, file);
    fwrite(patient.EGN, sizeof(long), 1, file);
    fwrite(patient.age, sizeof(int), 1, file);
    fwrite(patient.symptoms, sizeof(char), SYMPTOMS_MAX_LENGTH, file);
  }

  
  fclose(file);
  release(&list);

  return 0;
}