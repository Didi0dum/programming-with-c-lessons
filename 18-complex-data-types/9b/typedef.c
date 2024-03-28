#include <stdio.h>

typedef int newint;
typedef unsigned const long long ucll;
typedef ucll (*longintfuncptr)(ucll, ucll);
typedef ucll (*arrptrtype)[4];

typedef struct student {
  char name[26];
  int number;
} Student;

ucll addDistance(
  ucll a,
  ucll b
) {
  return a + b;
}

int main(void) {
  //ucll (*ptr)(ucll, ucll) = addDistance;
  longintfuncptr ptr = addDistance;

  ucll arr[4] = {1, 2, 3, 4};
  arrptrtype arrptr = &arr;

  ucll a = 10;
  ucll b = 15;
  ucll result = ptr(a, b);
  printf("%llu\n", result);

  Student maya;

  return 0;
}