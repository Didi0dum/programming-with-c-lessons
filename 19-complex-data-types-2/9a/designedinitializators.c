#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

int main(void) {

  int arr[10] = {[4] = 5, [2] = 10, [5 ... 8] = 99};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  int arr2[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr2[i]);
  }

  //Alternative syntax
  int arr3[100] = {[4]5, [2]10, [5 ... 8]99};

  Student ivan = {.number = 10, .name = "Ivan"};
  printf("%s \n", ivan.name);

  Student kristian = {
    number:18, 
    name:"Kristian"
  };
  printf("%s \n", kristian.name);

  return 0;
}