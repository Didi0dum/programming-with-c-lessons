#include <stdio.h>

typedef struct Student {
  char firstname[30];
  char middlename[30];
  char surname[30];
  int number;
  float averageGrade;
} StudentType;

int main(void) {

  StudentType ivan;
  ivan.number = 5;
  ivan.averageGrade = 5.5;

  StudentType students[26];

  return 0;
}