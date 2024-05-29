#include <stdio.h>
#include "date.h"
#include "participant.h"
#include "fileUtil.h"
#include <stdlib.h>

int main(void) {
  FILE * file = fopen("maraton.bin", "rb+");
  assertFileOpen(file);

  //Whence:
  //SEEK_SET - from the beginning of the file
  //SEEK_CUR - from the current cursor position
  //SEEK_END - from the end of the file
  fseek(file, sizeof(int)+sizeof(Date), SEEK_SET);

  Participant participant;
  fread(&participant, sizeof(Participant), 1, file);
  printParticipant(&participant);

  Participant marina = {
    .number = 4,
    .name = "Marina Kirilova",
    .time = 34
  };

  fseek(file, -sizeof(Participant), SEEK_CUR);
  fwrite(&marina, sizeof(Participant), 1, file);

  //Equivalent to fseek(file, 0, SEEK_SET);
  rewind(file);

  fclose(file);

  return 0;
}