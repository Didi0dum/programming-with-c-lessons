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

union StudentID {
  int egn;
  char fullname[30];
};

int main(void) {

  union Test test;
  test.x = 10;
  printf("%d\n", test.y);

  union Complex complex;
  complex.x = 10;
  printf("%d\n", complex.x);

  complex.z = 3.6;
  printf("%d\n", complex.x);
  printf("%f\n", complex.y);

  union StudentID alex;
  alex.egn = 123124123;

  union StudentID alexandra;
  strcpy(alexandra.fullname, "Alexandra");


  return 0;
}