#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("students.txt", "r");
  if (file == NULL) {
    printf("Cannot open the file\n");
    exit(1);
  }

  int number;
  char name[30];
  double averageGrade;
  //EOF - end of file - constant
  while(fscanf(file, "%d %s %lf", &number, name, &averageGrade) != EOF) {
    printf("Number: %d, Name: %s, Average grade: %lf\n", number, name, averageGrade);
  }

  //Always close the file after finishing using it
  fclose(file);

  return 0;
}