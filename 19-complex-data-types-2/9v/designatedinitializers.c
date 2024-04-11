#include <stdio.h>

typedef struct {
  char name[30];
  int number;
} Student;

#define SIZE 10

int main(void) {

  int arr[10] = {[5] = 7, [1] = 3, [6 ... SIZE - 1] = 99};
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  //You can ovveride values, the most rightone counts
  int arr2[100] = {[0 ... 99] = 1, [3] = 4, [7] = 8};
  for (int i = 0; i < 100; i++) {
    printf("%d ", arr2[i]);
  }
  printf("\n");

  //This is alternative syntax
  int arr4[10] = {[5]7, [1]3, [6 ... SIZE - 1]99};

  //The order here doesn't matter
  Student ivan = {.number = 1, .name = "Ivan"};

  //Alternative syntax - similar to the JSON format
  Student lili = {
    number:2, 
    name:"Lili"
  };

  return 0;
}