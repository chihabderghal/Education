// Program to reverse the element of the stack using two stacks.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isEmpty();
void push(int data);
void pop();
void print();

typedef struct node {
  int data;
  struct node *link;
}node; 

node *top = NULL;

bool isEmpty() {
  
  if (top == NULL)
    return true;
  else
    return false;
}

void push(int data) {
  
  node *tmp = malloc(sizeof(node));
 
  if (tmp == NULL) {
    printf("Stack Overflow\n");
    exit(1);
  }

  tmp->data = data;
  tmp->link = NULL;

  tmp->link = top;
  top = tmp;
}

void pop(int *val) {
 
  node *ptr = top;

  if (isEmpty()) {
    printf("Stack underflow\n");
    exit(1);
  }

  *val = ptr->data;
  top = top->link;

  free(ptr);
  ptr = NULL;
}

void print() {

  node *print = top;

  while (print != NULL) {
    printf("|--%d--|\n", print->data);
    print = print->link;
  }
}

int main() {
  
  push(1);
  push(2);
  push(3);
  
  print();


  return 0;
}
