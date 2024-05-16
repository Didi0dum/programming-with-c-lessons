#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("diary.txt", "a");
  if (file == NULL) {
    printf("Cannot open the file\n");
    exit(1);
  }

  char line1[] = "Today it was rainy and I was late for the bus\n";
  fputs(line1, file);

  //Always close the file after finishing using it
  fclose(file);

  return 0;
}