#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

typedef struct studentclass{
  Student students[4];
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

  Student ivan = {
    .name = "Ivan",
    .number = 10
  };

  Student lili = {
    .name = "Lili",
    .number = 11
  };

  Student georgi = {
    .name = "Georgi",
    .number = 12
  };

  StudentClass v9 = {
    .students = {
      [3] = ivan, 
      [1] = lili, 
      [2] = georgi, 
      [0] = {
        .name = "Dobromir", 
        .number = 13
      }
    },
    .grade = 9,
    .classLetter = 'v'
  };

  printf("Name: %s\n", v9.students[3].name);

  return 0;
}