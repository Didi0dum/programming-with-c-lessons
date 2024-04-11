#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

//Copy the structure to the function argument
void printStudent(Student stud) {
  //Print
}

//Doesn't copy the values, uses the same address
void printStudent2(Student * stud) {
  //Print
}

int main(void) {

  Student ivan = {.name = "Ivan", .number = 1};

  printStudent(ivan);//

  Student * ivanptr = &ivan;

  printf("Name: %s\n", (*ivanptr).name);
  //Alternative syntax
  printf("Name: %s\n", ivanptr->name);

  return 0;
}