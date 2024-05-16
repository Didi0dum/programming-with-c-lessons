#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("diary.txt", "a");
  if (file == NULL) {
    printf("Cannnot open file \n");
    exit(1);
  }

  char today[] = "Today was rainy outside and I was late for the bus\n";
  fputs(today, file);

  //Always close the file, when done using it.
  fclose(file);

  return 0;
}