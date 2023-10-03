#include <stdio.h>

void bubblesort(int arr[], int arrlen) {
  int sorted = 0;
  for (int i = 0; i < arrlen - 1 && !sorted; i++) {
    sorted = 1;
    for (int j = 0; j < arrlen - 1 - i; j++) {
      if (arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        sorted = 0;
      }
    }
  }
}

int main(void) {

  int array[5] = {1, 10, 3, 2, 15};
  int arrlen = 5;
  bubblesort(array, arrlen);
  for (int i = 0; i < arrlen; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}