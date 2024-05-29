#include <stdio.h>
#include "date.h"
#include "participant.h"
#include "fileUtil.h"

#define PARTICIPANT_COUNT 3

int main(void) {

  Participant participants[PARTICIPANT_COUNT] = {
    {.number = 1, .name = "Ivan Ivanov", .time = 55},
    {.number = 2, .name = "Kiril Antonov", .time = 32},
    {.number = 3, .name = "Velina Georgieva", .time = 25}
  };

  Date date = {
    .day = 29,
    .month = 5,
    .year = 2024
  };

  //File modes
  //Text files  | Binary files
  // w           wb
  // r           rb
  // a           ab
  // w+          wb+
  // r+          rb+
  // a+          ab+
  FILE * file = fopen("maraton.bin", "wb");
  assertFileOpen(file);

  int participantCount = PARTICIPANT_COUNT;
  fwrite(&participantCount, sizeof(participantCount), 1, file);

  fwrite(&date, sizeof(date), 1, file);
  fwrite(participants, sizeof(Participant), participantCount, file);

  fclose(file);

  return 0;
}