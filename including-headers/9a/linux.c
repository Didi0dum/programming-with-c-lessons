#include <stdio.h>
#include <string.h>

#include "osinfo.h"

int main(void) {
  struct osinfo info = getinfo();
  printf("OS name: %s\n", info.name);
  printf("OS bitversion: %d\n", info.bitversion);
  return 0;
}

struct osinfo getinfo(void) {
  struct osinfo info;
  strcpy(info.name, "Linux");
  info.bitversion = 32;

  return info;
}