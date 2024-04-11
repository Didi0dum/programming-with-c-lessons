#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

typedef struct {
  Student students[26];
  int grade;
  char studentLetter;
} StudentClass;

typedef struct lesson {
  struct {
    char name[30];
    char teachingSubject[30];
  } teacher;
  StudentClass studclass;
  float startingTime;
  int durationInMinutes;
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
  DaySchedule days[5];
  Bool isEven;
} WeekSchedule;

int main(void) {

  //Disallowed:
  //Teacher teacher;
  Lesson lesson;
  //Allowed:
  printf("%s", lesson.teacher.name);

  struct {
    char schoolName[30];
    char schooladdress[30];
  } school;

  return 0;
}