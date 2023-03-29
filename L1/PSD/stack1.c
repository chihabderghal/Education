// Array implementaion of stacks. 

#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;  // indicates that the stack is empty.

void push(int data); // function to push data in the stack.
int pop(); // function to pop data from the stack. 
void print(); // function to print the data int stack.
bool isFull(); // function to check if the stack full or not.
bool isEmpty(); // function to check if the stack is empty or not.

bool isFull() {
  if (top == MAX - 1)
    return false;
  else
    return true;
}

bool isEmpty() {
  
  if (top == -1)
    return false;
  else 
    return true;
}

void push(int data) {

  if (isFull()) {
    printf("Stack overflow\n");
    return; // indicate the end of the function.
  }

  top++;
  stack_arr[top] = data;
}

int pop() {
  int value;
  
  if (isEmpty()) {
    printf("Stack overflow");
    exit(1);
  }

  value = stack_arr[top];
  top--;
  return value;
 }

void print() {
  
  if (top == -1) {
    printf("Stack underflow");
    return;
  }

  for (int i = top; i >= 0; i--)
    printf("%d \n", stack_arr[i]);
}

int main() {
  push(1);
  push(2);
  push(3);
  push(4);
  
  int data;

  data = pop();
  data = pop();
  print();

  return 0;
}
