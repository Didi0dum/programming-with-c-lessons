#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

void printStudent(Student student) {
  printf("Name: %s\n", student.name);
  printf("Number: %d\n", student.number);
}

void printStudent2(Student * student) {
  printf("Name: %s\n", student->name);
  printf("Number: %d\n", student->number);
}

int main(void) {

  Student ivan = {
    .name = "Ivan",
    .number = 1
  };
  //This function will create a copy of the variable ivan, passing it to the argument of the function
  printStudent(ivan);

  Student * ptr = &ivan;
  //This function will only use the address of the variable ivan, which is optimized version
  printStudent2(ptr);

  printf("Name: %s \n", (*ptr).name);

  //Alternative syntax of accessing properties of the structure via structure pointer
  printf("Name: %s \n", ptr->name);

  return 0;
}