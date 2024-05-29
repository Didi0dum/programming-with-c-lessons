#include <stdio.h>
#include "participant.h"
#include "date.h"
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

  Participant kiril = {
    .name = "Kiril Kirilov",
    .number = 4,
    .time = 88
  };

  fseek(file, -sizeof(Participant), SEEK_CUR);
  fwrite(&kiril, sizeof(Participant), 1, file);

  //Return the cursor the the beginning of the file
  rewind(file);

  fclose(file);

  return 0;
}