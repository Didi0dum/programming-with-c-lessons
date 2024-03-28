#include <stdio.h>

double foo(int a, int b) {
  return a + b;
}

struct student {
  char name[26];
  int number;
};

int main(void) {

  double (*ptr)(int, int) = foo;
  printf("%lf\n", ptr(5, 10));

  int arr[4] = {1, 2, 3, 4};
  int (*ptr)[4] = &arr;

  struct student ivan;

  return 0;
}