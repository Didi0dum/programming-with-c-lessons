#include <stdio.h>

//Декларация на изброим тип (enumerable type)
enum Weekday {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

enum RobotState {
  TURNED_OFF = 0,
  WORKING = 1,
  CHARGING = 1
};

typedef enum Boolean {
  false = 0,
  true = 1
} bool;

void printWeekdayLegend() {
  printf("1 - Monday\n");
  printf("2 - Tuesday\n");
  printf("3 - Wednesday\n");
  printf("4 - Thursday\n");
  printf("5 - Friday\n");
  printf("6 - Saturday\n");
  printf("7 - Sunday\n");
};

int main(void) {

  printWeekdayLegend();
  int dayInput = 0;
  printf("Please enter a weekday:");
  scanf("%d", &dayInput);

  enum Weekday currentDay = dayInput;

  switch (currentDay) {
    case MONDAY:
    case TUESDAY:
    case WEDNESDAY:
    case THURSDAY:
    case FRIDAY:
      printf("The robot is collecting garbage\n");
      break;
    case SATURDAY:
    case SUNDAY:
      printf("The robot is charging the battery\n");
      break;
    default:
      printf("Invalid weekday!\n");
  }

  bool isCharging = false;
  if (isCharging) {
    printf("Please wait untill robot is fully charged \n");
  } else {
    printf("The robot is ready for work\n");
  }

  return 0;
}