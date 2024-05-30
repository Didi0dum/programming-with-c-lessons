#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"

#define PATIENT_COUNT 3

int main(void) {

  Patient patients[PATIENT_COUNT] = {
    {.name = "Ivan Ivanov", .age = 53, .EGN = 7123114421, .symptoms="I have a headache"},
    {.name = "Nikolai Marinov", .age = 25, .EGN = 9912042311, .symptoms = "I have a stomacheache"},
    {.name = "Petar Aleksandrov", .age = 24, .EGN = 1123114421, .symptoms="I have smart students"},
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