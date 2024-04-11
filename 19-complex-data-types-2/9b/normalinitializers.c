#include <stdio.h>
#include <string.h>

typedef struct student {
  char name[30];
  int number;
} Student;

int main(void) {

  int arr[4] = {1, 2, 3, 4};
  int arr2[4] = {1, 2};
  for (int i = 0; i < 4; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  int arr3[100] = {0};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr3[i]);
  }

  printf("\n");

  Student nikolai;
  strcpy(nikolai.name, "Nikolai");
  nikolai.number = 10;

  printf("Name:%s\n", nikolai.name);

  //char name[30] = "Ivan";

  //The order of the values should follow the order of the declared variables in the structure
  Student ivan = {"Ivan", 15};
 
  printf("Name:%s\n", ivan.name);

  return 0;
}