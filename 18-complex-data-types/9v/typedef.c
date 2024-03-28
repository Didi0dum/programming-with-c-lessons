#include <stdio.h>

typedef unsigned const long long ucll;

typedef ucll (*funcptr)(ucll, ucll);

typedef ucll (*arrptr)[4];
typedef ucll (*arrptr5)[5];

typedef char (*ipaddress)[4];

typedef struct Student {
  int number;
  char name[30];
} StudentType;

ucll sumDistance(
  ucll distance1,
  ucll distance2
) {
  return distance1 + distance2;
}

int main(void) {

  ucll arr[4] = {1, 2, 3, 4};
  char (*ptr)[4];
  arrptr p = &arr;

  funcptr fptr = sumDistance;

  ucll d1 = 10;
  ucll d2 = 15;
  ucll d3 = fptr(d1, d2);
  printf("%llu\n", d3);

  StudentType lybomir;

  return 0;
}