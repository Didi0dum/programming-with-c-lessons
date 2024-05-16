#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //w - open for writing
  //r - open for reading
  //a - open for appending
  //w+ - open for writing and reading
  //r+ - open for reading and writing
  //a+ - open for reading and appending
  FILE * file = fopen("chars.txt", "w");
  if (file == NULL) {
    printf("Cannot open file \n");
    exit(1);
  }

  //Here we write the text in the text file without the new lines
  char text[100] = "This text\n contains \n new lines";
  for (int i = 0; text[i] != '\0';i++) {
    if(text[i] != '\n') {
      fputc(text[i], file);
    }
  }

  //Always close the file after finish using it
  fclose(file);

  return 0;
}