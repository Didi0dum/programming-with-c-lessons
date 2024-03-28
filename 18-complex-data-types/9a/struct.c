#include <stdio.h>

typedef struct student {
  char firstname[30];
  char middlename[30];
  char surname[30];
  int number;
  float averageGrade;
  int classNumber;
} Student;

void addNewStudent(Student students[], int studentsCount) {
  //Adding data to the students array
}

void printStudents(Student students[], int studentCount) {
  for (int i = 0; i < studentCount; i++) {
    printf("%s\n", students[i].firstname);
    printf("%s\n", students[i].middlename);
    printf("%s\n", students[i].surname);
    printf("%f\n", students[i].averageGrade);
    printf("%d\n", students[i].number);
    printf("%d\n", students[i].classNumber);
  }
}

int main(void) {

  Student students[26];
  Student ivan;

  return 0;
}