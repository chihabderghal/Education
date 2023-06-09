// Program to reverse the element of the stack using two stacks.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
  int data;
  struct node *link;
} node;  

bool isEmpty(node *top);
void push(int data, node **top);
void pop(int *val, node **top);
void print(node *top);
void reverse_stack(node **top);

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

void reverse_stack(node **top) {
  
  node *top1 = NULL;
  node *top2 = NULL;
  int val;

  while (!isEmpty(*top)) {
    pop(&val, top);
    push(val, &top1);
  }

  while (!isEmpty(top1)) {
    pop(&val, &top1);
    push(val, &top2);
  }
  
  *top = top2;
}


int main() {
  
  node *top = NULL;

  // node *top1 = NULL;
  // node *top2 = NULL;

  /*
   * Without using function
   *
  // Original stack to tmp stack (1). 
  push(1, &top);
  push(2, &top);
  push(3, &top);
  print(top);

  int val;

  // Tmp stack (1) stack to tmp stack (2). 
  pop(&val, &top);
  push(val, &top1);
  pop(&val, &top);
  push(val, &top1);
  pop(&val, &top);
  push(val, &top1);

  printf("\n");
  print(top1);

  // Tmp stack (2) stack to tmp stack (3). 

  pop(&val, &top1);
  push(val, &top2);
  pop(&val, &top1);
  push(val, &top2);
  pop(&val, &top1);
  push(val, &top2);

  printf("\n");
  print(top2);

  */
  
  // Using the function;

  push(1, &top);
  push(2, &top);
  push(3, &top);
  print(top);

  reverse_stack(&top);
  printf("\n");
  print(top);

  return 0;

}
