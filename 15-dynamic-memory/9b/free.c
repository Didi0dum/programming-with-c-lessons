#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int gradesCount = 0;
  printf("Please enter the number of grades:");
  scanf("%d", &gradesCount);
  float * grades = (float *)calloc(gradesCount, sizeof(float));
  
  if (grades == NULL) {
    printf("Error allocating memory\n");
    return 1;
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("Please enter grades %d:", i + 1);
    scanf("%f", &grades[i]);
  }

  for (int i = 0; i < gradesCount; i++) {
    printf("grade %d: %f\n", i + 1, grades[i]);
  }

  float * averageGrade = (float *)malloc(sizeof(float));

  float sum = 0;
  for (int i = 0; i < gradesCount; i++) {
    sum += grades[i];
  }
  *averageGrade = sum / gradesCount;

  printf("Average grade:%f\n", *averageGrade);

  //If the pointer is reasigned before freeing the memory, we lose the address of the allocated memory which causes a memory leak
  //grades = NULL;

  free(averageGrade);
  free(grades);
  //Freeing already freed memory or memory not allocated with malloc, calloc or realloc, causes a runtime error 
  //free(grades);

  return 0;
}