#include <stdio.h>

//Recursive structure
struct Node {
  int value;
  struct Node * next;
};

int main(void) {

  struct Node node1 = {5, NULL};
  struct Node node2 = {8, NULL};

  node1.next = &node2;
  printf("%d\n", node1.next->value);

  return 0;
}