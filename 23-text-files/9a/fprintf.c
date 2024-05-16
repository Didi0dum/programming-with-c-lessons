#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("students.txt", "a");
  if (file == NULL) {
    printf("Cannnot open file \n");
    exit(1);
  }

  int number = 1;
  char name[30] = "Ivan";
  double averageGrade = 5.25;

  fprintf(file, "%d %s %lf\n", number, name, averageGrade);

  fclose(file);

  return 0;
}