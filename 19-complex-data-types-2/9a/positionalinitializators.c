#include <stdio.h>
#include <string.h>

typedef struct {
  char name[30];
  int number;
} Student;

int main(void) {

  int arr[4] = {1, 2, 3, 4};
  int arr2[5] = {1, 2, 3};
  int arr3[100] = {0}; //Initializing the array with zeros
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr3[i]);
  }

  Student kristian;
  kristian.number = 18;
  strcpy(kristian.name, "Kristian");
  printf("Name:%s\n", kristian.name);

  Student ivan = {"Ivan", 1};
  printf("Name:%s\n", ivan.name);

  return 0;
}