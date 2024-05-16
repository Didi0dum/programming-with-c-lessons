#include <stdio.h>
#include <stdlib.h>

int main(void) {
 
  FILE * file = fopen("diary.txt", "r");
  if (file == NULL) {
    printf("Cannot open file \n");
    exit(1);
  }

  char line[100];
  //Reads the newline aswell, max 99 symbols (because the \0)
  while(fgets(line, 100, file) != NULL) {
    printf("%s", line);
  }

  //Always close the file after finish using it
  fclose(file);

  return 0;
}