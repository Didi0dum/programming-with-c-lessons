#include <stdio.h>

double sum(int a, int b) {
  return a + b;
}

struct Student {
  int number;
  char name[30];
};

int main(void) {

  int arr[4] = {1, 2, 3, 4};
  int (*arrptr)[4] = &arr;

  double (*ptr)(int, int) = sum;
  ptr(5,10);

  struct Student lybomir;

  return 0;
}