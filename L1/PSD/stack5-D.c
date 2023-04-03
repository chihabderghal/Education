
#include <stdio.h>
#include <stdlib.h>
#include <bool.h>

void push(int data);

struct node {
  int data;
  struct node *link;
} *top = NULL;

void push(int data) {
  
  node *new-node = malloc(sizeof(new-node));
  if (new-node == NULL) {
    printf("Stack overflow\n");
    exit(1);
  }

  new-node->data = data;
  new-node->link = NULL;

  new-node-> top;
  top = new-node;

}
  




int main() {


  return 0;
}
