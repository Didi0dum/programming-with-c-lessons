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
  char fullname[50];
};

union IpAddress {
  int number;
  unsigned char arr[4];
};

int main(void) {

  union Test test;
  test.x = 10;
  printf("%d\n", test.y);

  union Complex complex;
  complex.x = 15;
  printf("%d\n", complex.x);

  complex.z = 5.5;
  printf("%d\n", complex.x);

  union StudentID ivan;
  ivan.egn = 10;
  printf("EGN:%d\n", ivan.egn);

  union StudentID maria;
  strcpy(maria.fullname, "Maria Ivanova");
  printf("Fullname: %s\n", maria.fullname);

  union IpAddress ipaddress;
  ipaddress.arr[0] = 192;
  ipaddress.arr[1] = 168;
  ipaddress.arr[2] = 77;
  ipaddress.arr[3] = 255;

  union IpAddress ipaddress;
  ipaddress.number = 192168077255;

  return 0;
}