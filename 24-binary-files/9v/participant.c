#include "participant.h"
#include <stdio.h>

void printParticipant(Participant * participant) {
  printf("-----------------------\n");
  printf("Number: %u\n", participant->number);
  printf("Name: %s\n", participant->name);
  printf("Time: %u\n", participant->time);
  printf("-----------------------\n");
}

void printParticipants(Participant participants[], uint count) {
  for (uint i = 0; i < count; i++) {
    printParticipant(&participants[i]);
  }
}