#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  FILE * file = fopen("diary.txt", "w");
  if (file == NULL) {
    printf("Cannot open file \n");
    exit(1);
  }

  char line[100] = "Today it was rainy, but somehow I managed to catch the bus";
  fputs(line, file);

  //Always close the file after finish using it
  fclose(file);

  return 0;
}