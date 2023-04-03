// Linked list implementation od stacks.

#include <stdio.h>
#include <stdlib.h>

void push(int data);
void print();

struct node {
  int data;
  struct node *link;
} *top = NULL;

void push(int data) {
  
  struct node *newNode = malloc(sizeof(struct node));
  if (newNode == NULL) {
    printf("Stack overflow\n");
    exit(1);
  }

  newNode->data = data;
  newNode->link = NULL;

  newNode->link = top;
  top = newNode;
}
  
void print(){
  
  struct node *tmp = malloc(sizeof(struct node));
  tmp = top;

  while (tmp != NULL) {
    printf("|--%d--|\n", tmp->data);
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
  
  switch (choice) {
    case 1:
      printf("Enter the element to be pushed : ");
      scanf("%d", &data);
      push(data);
      break;

    case 2:
      print();
      break;

    case 3:
      exit(1);
      break;

    default:
      printf("!Eror!, Type again\n");
      break;
    }
  }

  return 0;
}
