#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 1000

void eacher(uint index, ListType nodeValue) {
  printPatient(&nodeValue);
}

int main(void) {

  FILE * file = fopen("patients.csv", "r");
  assertFileOpen(file);

  LinkedList list = init();

  char line[MAX_LINE_LENGTH];
  while (fgets(line, MAX_LINE_LENGTH, file) !=  NULL) {
    char * ptr = strchr(line, '\n');
    if (ptr != NULL) {
      *ptr = '\0';
    }

    Patient patient;
    char * token = strtok(line, ",");
    if (token != NULL) {
      strcpy(patient.name, token);
    }

    token = strtok(NULL, ",");
    if (token != NULL) {
      patient.EGN = atol(token);
    }

    token = strtok(NULL, ",");
    if (token != NULL) {
      patient.age = atoi(token);
    }

    token = strtok(NULL, ",");
    if (token != NULL) {
      strcpy(patient.symptoms, token);
    }

    pushBack(&list, patient);
  }


  forEach(&list, eacher);

  fclose(file);
  release(&list);

  return 0;
}