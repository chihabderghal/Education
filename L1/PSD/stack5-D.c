// Linked list implementation od stacks.

#include <stdio.h>
#include <stdlib.h>
#include <bool.h>

void push(int data);
void print();

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
  
void print(){
  
  node *tmp = malloc(sizeof(new-node));
  tmp = top;

  while (tmp != NULL) {
    printf("%d\n", tmp->data);
    tmp = tmp->link;
  }
}




int main() {

  int choice, data;
  while (1) {
    printf("1. Push\n");
    printf("2. Print\n");
    printf("3. Quit\n");
    printf("Enter your choice : ");
    scanf("%d", &choice);
  }

  switch (choice) {
    case 1:
      printf("Enter the element to be pushed : ");
      scanf("%d", &data);
      push(data);
      break;

    case 2:
      printf();
      break;

    case 3:
      exit(1);

    default:
      printf("!Eror!, Type again");
      break;
  }


  return 0;
}
