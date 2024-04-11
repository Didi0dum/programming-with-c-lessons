#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

void printStudent(Student stud) {
  printf("Name: %s\n", stud.name);
  printf("Number: %d\n", stud.number);
};

void printStudent2(Student * stud) {
  printf("Name: %s\n", stud->name);
  printf("Number: %d\n", stud->number);
};

int main(void) {

  Student ivan = {
    .name = "Ivan",
    .number = 1
  };
  //Will copy the value of ivan
  printStudent(ivan);

  Student * ptr = &ivan;
  //Is more effective, because it will just point the pointer to the address of the structure variable
  printStudent2(ptr);

  printf("Name: %s\n", (*ptr).name);
  //Alternative syntax
  printf("Name: %s\n", ptr->name);
  

  return 0;
}