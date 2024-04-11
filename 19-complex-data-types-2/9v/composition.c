#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

typedef struct studentclass{
  Student students[26];
  int grade;
  char classLetter;
} StudentClass;

typedef struct teacher {
  char name[30];
  char teachingsubject[30];
} Teacher;

typedef struct lesson {
  Teacher teacher;
  StudentClass studentClass;
  float startingTime;
  int durationInMinutes;
} Lesson;

typedef enum weekday {
  MONDAY = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
} Weekday;

typedef struct dayschedule {
  Weekday day;
  Lesson lessons[8];
} DaySchedule;

typedef enum bool {
  false,
  true
} Bool;

typedef struct weekschedule {
  DaySchedule schedules[5];
  Bool isEven;
} WeekSchedule;

int main(void) {

  return 0;
}