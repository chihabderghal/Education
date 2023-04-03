// Linked list implementation od stacks.

#include <stdio.h>
#include <stdlib.h>
#include <stdboo.h>

void push(int data);
void print();
void pop(int *val);
bool isEmpty();
int peek();

struct node {
  int data;
  struct node *link;
} *top = NULL;

bool isEmpty() {
  
  if (top == NULL) 
    return true;
  else 
    reurn false;
}

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

void pop(int *val) {
  struct node *tmp;
  tmp = top;

  if (isEmpty()) {
    prinf("Stack underflow\n");
    exit(1);
  }

  *val = tmp->data;
  top = top->link;

  free(tmp);
  tmp = NULL;
}

int peek(int *val) {
 
   if (isEmpty()) {
    prinf("Stack underflow\n");
    exit(1);
  }
  return top->data;
}


void print(){
  
  struct node *tmp;
  tmp = top;

   if (isEmpty()) {
    prinf("Stack underflow\n");
    exit(1);
  }


  while (tmp != NULL) {
    printf("|--%d--|\n", tmp->data);
    tmp = tmp->link;
  }
}

int main() {

  int choice, data, val;
  while (1) {
    printf("1. Push\n");
    printf("2. Print\n");
    printf("3. Quit\n");
    printf("4. remove the top\n");
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

    case 4:
      pop(&val);
      break;

    default:
      printf("!Eror!, Type again\n");
      break;
    }
  }

  return 0;
}
