#include <stdio.h>
#include "participant.h"
#include "date.h"
#include "fileUtil.h"

#define PARTICIPANT_COUNT 3

int main(void) {

  //Mock up data
  Participant participants[PARTICIPANT_COUNT] = {
    {.number = 1, .name = "Ivan Ivanov", .time = 55},
    {.number = 2, .name = "Lilia Georgieva", .time = 32},
    {.number = 3, .name = "Dimitar Nikolaev", .time = 75}
  };

  Date date = {
    .day = 29,
    .month = 5,
    .year = 2024
  };

  //File mode:
  // Text File  |   Binary file
  // w              wb
  // r              rb
  // a              ab
  // w+             wb+
  // r+             rb+
  // a+             ab+
  FILE * file = fopen("maraton.bin","wb");
  assertFileOpen(file);

  int participantCount = PARTICIPANT_COUNT;
  fwrite(&participantCount, sizeof(participantCount), 1, file);
  fwrite(&date, sizeof(date), 1, file);
  fwrite(participants, sizeof(Participant), participantCount, file);

  fclose(file);

  return 0;
}