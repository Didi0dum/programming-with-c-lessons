#include <stdio.h>
#include "maths.h"
#include "strings.h"

int main(void) {

  double result = square(5);
  printf("%lf !!!\n", result);

  int len = stringlength("Ivan");
  printf("%d \n", len);

  return 0;
}