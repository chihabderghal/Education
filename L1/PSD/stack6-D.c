// Program to reverse the element of the stack using two stacks.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
  int data;
  struct node *link;
} node;  

bool isEmpty();
void push(int data, node **top);
void pop(int *val, node **top);
void print(node *top);

bool isEmpty(node *top) {
  
  if (top == NULL)
    return true;
  else
    return false;
}

void push(int data, node **top) {
  
  node *tmp = malloc(sizeof(node));
 
  if (tmp == NULL) {
    printf("Stack Overflow\n");
    exit(1);
  }

  tmp->data = data;
  tmp->link = NULL;

  tmp->link = *top;
  *top = tmp;
}

void pop(int *val, node **top) {
  
  node *ptr = *top;

  if (isEmpty(*top)) {
    printf("Stack underflow\n");
    exit(1);
  }

  *val = ptr->data;
  *top = ptr->link;

  free(ptr);
  ptr = NULL;
}

void print(node *top) {

  node *print = top;
  if (isEmpty(top)) {
    printf("Stack underflow\n");
    exit(1);
  }

  while (print != NULL) {
    printf("|--%d--|\n", print->data);
    print = print->link;
  }
}

int main() {
  
  node *top = NULL;
  node *top1 = NULL;
  node *top2 = NULL;

  push(1, &top);
  push(2, &top);
  push(3, &top);
  print(top);


  return 0;
}
