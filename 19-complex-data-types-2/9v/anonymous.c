#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

typedef struct {
  Student students[26];
  int grade;
  char classLetter;
} StudentClass;

typedef struct {
  struct {
    char name[30];
    char teachingsubject[30];
  } teacher;
  StudentClass studentClass;
  float startingTime;
  int durationInMinutes;
} Lesson;

typedef struct dayschedule {
  enum weekday {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
  } day;
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

  //Annonymous structure
  struct {
    char schoolName[30];
    char schoolAddress[30];
  } school;

  printf("%s", school.schoolName);

  return 0;
}