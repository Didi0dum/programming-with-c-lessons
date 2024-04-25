#include <stdio.h>
#include "linkedlist.h"

void printElement(uint index, ListType value) {
  printf("[%u]=>%lf ", index, value);
}

void printLinkedList(LinkedList * list) {
  forEeach(list, printElement);
  printf("\n");
}

int main(void) {

  printf("Executing tests: \n");
  LinkedList list = init();
  printf("Is head NULL: %d\n", list.head == NULL);
  printf("Size: %u\n", list.size);

  pushFront(&list, 10);
  pushFront(&list, 15);
  pushFront(&list, 20);
  printLinkedList(&list);

  struct ListNode * secondNode = getElement(&list, 1);
  printf("Second value : %lf\n", secondNode->value);

  push(&list, 1, 99);
  printLinkedList(&list);

  pushBack(&list, 105);
  printLinkedList(&list);

  setElement(&list, 2, 999);
  printLinkedList(&list);

  ListType firstElement = popFront(&list);
  printf("First element: %lf \n", firstElement);
  printLinkedList(&list);

  ListType thirdElement = pop(&list, 2);
  printf("Third element: %lf \n", thirdElement);
  printLinkedList(&list);

  ListType lastElement = popBack(&list);
  printf("Last element: %lf \n", lastElement);
  printLinkedList(&list);

  release(&list);
  printf("Is head NULL: %d\n", list.head == NULL);
  printf("Size: %u\n", list.size);

  return 0;
}