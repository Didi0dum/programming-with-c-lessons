#include <stdio.h>

typedef unsigned const long long ucll;

typedef ucll (*longintfuncptr)(ucll, ucll);

typedef ucll (*longarrptr)[4];

typedef struct student {
  char name[30];
  int number;
} Student;

ucll sumDistances(
  ucll a, 
  ucll b
) {
  return a + b;
}

int main(void) {
  ucll a = 10;
  ucll b = 15;

  ucll arr[4] = {1, 2, 3, 4};
  longarrptr arrptr = &arr;

  longintfuncptr ptr = sumDistances;

  ucll c = ptr(a, b);
  printf("%llu", c);

  Student ivan;

  return 0;
}