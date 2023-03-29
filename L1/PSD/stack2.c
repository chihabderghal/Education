// Program to impliment a stack in an array using stack_arr[0] as the top element.
// do the same with pop() function.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

int stack_arr[MAX];
int top = -1;

void push(int data);
void print();
int pop();

void push(int data) {
  
  top++;
  for (int i = top; i > 0; i--) 
    stack_arr[i] = stack_arr[i - 1];

  stack_arr[0] = data;
}

int pop() {
  
  int value;

  value = stack_arr[0];
  for (int i = 0; i <= top; i++ ) {
    stack_arr[i] = stack_arr[i + 1];
  }

  return value;
}

void print() {

  if (top == -1) {
    printf("Underflow\n");
    exit(1);
  }

  for (int i = 0; i <= top; i++)
    printf("|--%d--| \n", stack_arr[i]);
}

int main() {

  push(10);
  push(20);
  push(30);
  push(40);
  push(50);

  int data = pop(); 

  print();

  return 0;
}
