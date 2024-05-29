#include <stdio.h>
#include "participant.h"
#include "date.h"
#include "fileUtil.h"
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("maraton.bin", "rb");
  assertFileOpen(file);

  int participantsCount;
  fread(&participantsCount, sizeof(int), 1, file);
  printf("Participants: %d\n", participantsCount);

  Date date;
  fread(&date, sizeof(Date), 1, file);
  printDate(&date);

  Participant * participants = (Participant *)malloc(sizeof(Participant) * participantsCount);
  if (participants == NULL){
    printf("Error allocating memory\n");
    exit(1);
  }
  fread(participants, sizeof(Participant), participantsCount, file);
  printParticipants(participants, participantsCount);

  fclose(file);

  return 0;
}