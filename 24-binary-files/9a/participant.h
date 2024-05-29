#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include "types.h"

#define PARTICIPANT_NAME_MAX_LENGTH 60

typedef struct {
  uint number;
  uint time;
  char name[PARTICIPANT_NAME_MAX_LENGTH];
} Participant;

void printParticipant(Participant * participant);
void printParticipants(Participant participants[], uint count);

#endif