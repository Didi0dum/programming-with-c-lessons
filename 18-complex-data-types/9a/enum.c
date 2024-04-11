#include <stdio.h>

enum Weekday {
  SUNDAY = 1,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
};

/* Cannot initialize second enum with the same constants
enum Workday {
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
};
*/

enum RobotState {
  TURNED_OFF = 0,
  COLLECTING_GARBAGE = 1,
  FILLING_THE_BATTERY = 1
};

typedef enum Boolean {
  false = 0,
  true = 1,
} bool;

void printWeekDayLegend() {
  printf("1 - Sunday \n");
  printf("2 - Monday \n");
  printf("3 - Tuesday \n");
  printf("4 - Wednesday \n");
  printf("5 - Thursday \n");
  printf("6 - Friday \n");
  printf("7 - Saturday \n");
}

int main(void) {

  printWeekDayLegend();
  printf("Please enter a weekday\n");
  int dayInput = 0;
  scanf("%d", &dayInput);

  enum Weekday currentday;
  currentday = dayInput;

  switch (currentday) {
    case MONDAY:
    case TUESDAY:
    case WEDNESDAY:
    case THURSDAY:
    case FRIDAY:
      printf("Time to collect the garbage\n");
      break;
    case SUNDAY:
    case SATURDAY:
      printf("Time to fill the battery\n");
      break;
    default:
      printf("Invalid weekday!\n");
  }

  bool isRobotTurnedOn = false;

  if (isRobotTurnedOn) {
    printf("The robot is still turned on!\n");
  } else {
    printf("The robot is turned off\n");
  }

  return 0;
}