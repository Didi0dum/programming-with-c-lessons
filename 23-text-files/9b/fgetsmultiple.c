#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("diary.txt", "r");
  if (file == NULL) {
    printf("Cannot open the file\n");
    exit(1);
  }

  char line[100];
  while(fgets(line, 100, file) != NULL) {
    printf("%s", line);
  }

  //Always close the file after finishing using it
  fclose(file);

  return 0;
}