#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("students.txt", "w");
  if (file == NULL) {
    printf("Cannot open the file\n");
    exit(1);
  }

  int number = 1;
  char name[30] = "Ivan";
  double averageGrade = 5.35;

  fprintf(file, "%d %s %lf\n", number, name, averageGrade);

  //Always close the file after finishing using it
  fclose(file);

  return 0;
}