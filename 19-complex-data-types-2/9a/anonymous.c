#include <stdio.h>

//Here you can avoid naming the structure 
typedef struct {
  char name[30];
  int number;
} Student;

typedef struct {
  Student students[26];
  int grade;
  char classletter;
} StudentClass;

typedef struct lesson {
  StudentClass studentClass;
  struct {
    char name[30];
    char teachingsubject[30];
  } teacher;
  float startingtime;
  int durationinminutes;
} Lesson;

typedef struct dayschedule {
  enum {
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
  Bool isEvenWeek;
};

int main(void) {

  struct {
    char schoolname[30];
    char schooladdress[30];
  } school;

  return 0;
}