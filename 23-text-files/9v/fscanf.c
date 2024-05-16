#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("students.txt", "r");
  if (file == NULL) {
    printf("Cannot open file \n");
    exit(1);
  }

  int number;
  char name[30];
  double averageGrade;

  fscanf(file, "%d %s %lf", &number, name, &averageGrade);
  printf("Number: %d, Name: %s, Average grade: %lf", number, name, averageGrade);

  //Always close the file after finish using it
  fclose(file);

  return 0;
}