#include <stdio.h>
#include <string.h>

union Test {
  int x;
  int y;
};

union Complex {
  int x;
  float y;
  double z;
};

union StudentId {
  int egn;
  char fullname[30];
};

int main(void) {

  union Test test;
  test.x = 10;
  printf("%d\n", test.y);

  union Complex complex;
  complex.x = 15;
  printf("%d\n", complex.x);

  complex.z = 3.6;
  printf("%d\n", complex.x);

  union StudentId student1Id;
  student1Id.egn = 12312314;

  union StudentId student2Id;
  strcpy(student2Id.fullname, "Maria");

  return 0;
}