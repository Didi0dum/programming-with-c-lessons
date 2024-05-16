#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("chars.txt", "r");
  if (file == NULL) {
    printf("Cannot open file \n");
    exit(1);
  }
  char ch;
  while ((ch = fgetc(file))!= EOF) {
    printf("%c", ch);
  }

  //Always close the file after finish using it
  fclose(file);

  return 0;
}