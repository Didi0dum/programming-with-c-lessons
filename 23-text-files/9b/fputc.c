#include <stdio.h>
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("chars.txt", "w");
  if (file == NULL) {
    printf("Cannot open the file\n");
    exit(1);
  }

  char line[] = "This is a long\n Long \n text";
  for (int i = 0; line[i] != '\0'; i++) {
    fputc(line[i], file);
  }

  //Always close the file after finishing using it
  fclose(file);

  return 0;
}