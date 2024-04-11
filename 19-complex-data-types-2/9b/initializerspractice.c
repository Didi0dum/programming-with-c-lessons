#include <stdio.h>

typedef struct student {
  char name[30];
  int number;
} Student;

typedef struct studentclass {
  Student students[4];
  int grade;
  char studentLetter;
} StudentClass;

typedef struct teacher {
  char name[30];
  char teachingSubject[30];
} Teacher;

typedef struct lesson {
  Teacher teacher;
  StudentClass studclass;
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
  DaySchedule days[5];
  Bool isEven;
} WeekSchedule;

int main(void) {

  Student ivan = {
    .name = "Ivan",
    .number = 1
  };

  Student maria = {
    .name = "Maria",
    .number = 2
  };

  Student georgi = {
    .name = "Georgi",
    .number = 3
  };

  StudentClass b9 = {
    .students = {
      [3] = ivan, 
      [1] = maria, 
      [0] = georgi, 
      [2] = {
        .name="Stanislav", 
        .number=4
      }
    },
    .grade = 9,
    .studentLetter = 'b'
  };

  printf("Name: %s\n", b9.students[3].name);

  return 0;
}