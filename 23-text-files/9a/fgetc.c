#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("chars.txt", "r");
  if (file == NULL) {
    printf("Cannnot open file \n");
    exit(1);
  }

  char ch = fgetc(file);
  printf("%c", ch);

  //Always close the file, when done using it.
  fclose(file);

  return 0;
}