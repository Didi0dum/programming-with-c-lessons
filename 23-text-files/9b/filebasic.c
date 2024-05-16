#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //w - for writing
  //r - for reading
  //a - for appending
  //w+ - for writing and reading
  //r+ - for reading and writing
  //a+ - for reading and appending
  FILE * file = fopen("test.txt", "a");
  if (file == NULL) {
    printf("Cannot open the file\n");
    exit(1);
  }

  //Always close the file after finishing using it
  fclose(file);

  return 0;
}