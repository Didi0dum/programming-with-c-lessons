#include <stdio.h>
#include "participant.h"
#include "date.h"
#include "fileUtil.h"

#define PARTICIPANT_COUNT 3

int main(void) {

  Participant participants[PARTICIPANT_COUNT] = {
    {.number = 1, .name = "Ivan Ivanov", .time = 55},
    {.number = 2, .name = "Anna Nikolova", .time = 33},
    {.number = 3, .name = "Stanislav Ganchev", .time = 23},
  };

  Date date = {
    .day = 29,
    .month = 5,
    .year = 2024
  };

  int participantCount = PARTICIPANT_COUNT;

  //File modes
  //Text file | Binary file
  // w         wb
  // r         rb
  // a         ab
  // w+        wb+
  // r+        rb+
  // a+        ab+
  FILE * file = fopen("maraton.bin", "wb");
  assertFileOpen(file);

  fwrite(&participantCount, sizeof(participantCount), 1, file);
  fwrite(&date, sizeof(date), 1, file);
  fwrite(participants, sizeof(Participant), participantCount, file);

  fclose(file);

  return 0;
}