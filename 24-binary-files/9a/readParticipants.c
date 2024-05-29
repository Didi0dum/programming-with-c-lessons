#include <stdio.h>
#include "participant.h"
#include "date.h"
#include "fileUtil.h"
#include <stdlib.h>

int main(void) {

  FILE * file = fopen("maraton.bin","rb");
  assertFileOpen(file);

  int participantCount;
  fread(&participantCount, sizeof(int), 1, file);
  printf("Participant count: %d\n", participantCount);

  Date date;
  fread(&date, sizeof(Date), 1, file);
  printDate(&date);

  Participant * participants = (Participant *)malloc(participantCount * sizeof(Participant));
  if (participants == NULL) {
    printf("Error allocating memory\n");
    exit(1);
  }
  fread(participants, sizeof(Participant), participantCount, file);
  printParticipants(participants, participantCount);

  fclose(file);

  return 0;
}