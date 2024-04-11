#include <stdio.h>

struct Node {
  int value;
  struct Node * next;
};

int main(void) {

  struct Node node1 = {5, NULL};
  struct Node node2 = {6, NULL};

  node1.next = &node2;

  printf("Node 2 value: %d\n", node1.next->value);

  return 0;
}