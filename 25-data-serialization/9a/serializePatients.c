#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"

#define PATIENT_COUNT 3

int main(void) {

  Patient patients[PATIENT_COUNT] = {
    {.name = "Ivan Ivanov", .EGN = 23423423, .age = 23, .symptoms = "I have a headache"},
    {.name = "Nikoleta Marinova", .EGN = 12321312, .age = 42, .symptoms = "I have a stomache"},
    {.name = "Stoyan Georgiev", .EGN = 43242341, .age = 52, .symptoms = "I have a backpain"}
  };

  FILE * file = fopen("patients.csv", "w");
  assertFileOpen(file);

  for (int i = 0; i < PATIENT_COUNT; i++) {
    Patient patient = patients[i];
    fprintf(
      file, 
      "%s,%ld,%d,%s\n",
      patient.name,
      patient.EGN,
      patient.age,
      patient.symptoms
    );
  }
  
  fclose(file);

  return 0;
}