#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //w - open for writing
  //r - open for reading
  //a - open for appending
  //w+ - open for writing and reading
  //r+ - open for reading and writing
  //a+ - open for reading and appending
  FILE * file = fopen("test.txt", "w");
  if (file == NULL) {
    printf("Cannot open file \n");
    exit(1);
  }

  //Here we use the file

  //Always close the file after finish using it
  fclose(file);

  return 0;
}