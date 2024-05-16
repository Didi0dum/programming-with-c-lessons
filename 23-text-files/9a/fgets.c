#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //w - open for writing. 
  //r - open for reading
  //a - open for appending
  //w+ -open for writing and reading
  //r+ -open for reading and writing
  //a+ -open for reading and appending
  FILE * file = fopen("diary.txt", "r");
  if (file == NULL) {
    printf("Cannnot open file \n");
    exit(1);
  }
  char line[100];
  fgets(line, 100, file);

  puts(line);

  //Always close the file, when done using it.
  fclose(file);

  return 0;
}