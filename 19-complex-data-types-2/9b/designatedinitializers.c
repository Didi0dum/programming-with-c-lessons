#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

int main(void) {

  int arr[10] = {[5] = 6, [1] = 2, [6 ... 9] = 99};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int arr2[100] = {[0 ... 99] = 1};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  //Alternative syntax
  int arr[10] = {[5]6, [1]2, [6 ... 9]99};

  //The order is not important
  Student ivan = {.number = 1, .name = "Ivan"};

  //Alternative syntax
  Student maria = {
    number:2, 
    name:"Maria"
  };

  return 0;
}