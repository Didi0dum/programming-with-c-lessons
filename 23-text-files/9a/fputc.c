#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("chars.txt", "a");
  if (file == NULL) {
    printf("Cannnot open file \n");
    exit(1);
  }

  fputc('A', file);

  //Always close the file, when done using it.
  fclose(file);

  return 0;
}