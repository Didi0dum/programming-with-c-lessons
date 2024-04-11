#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

typedef struct studentclass {
  Student students[4];
  int grade;
  char classletter;
} StudentClass;

typedef struct teacher {
  char name[30];
  char teachingsubject[30];
} Teacher;

typedef struct lesson {
  StudentClass studentClass;
  Teacher teacher;
  float startingtime;
  int durationinminutes;
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
  Bool isEvenWeek;
} Weekschedule;

int main(void) {

  Student petia = {
    .number = 23,
    .name = "Petia"
  };

  Student nikola = {
    .name = "Nikola",
    .number = 22
  };

  Student maria = {
    .name = "Maria",
    .number = 21
  };

  StudentClass a9 = {
    .students = {
      [0] = petia, 
      [3] = nikola, 
      [2] = maria, 
      [1] = {
        .name = "Martin", 
        .number=19
      }
    },
    .grade = 9,
    .classletter = 'a'
  };

  printf("%s\n", a9.students[3].name);

  return 0;
}