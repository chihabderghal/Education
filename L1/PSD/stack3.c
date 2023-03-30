// Program to print all the prime factors of a numebr in decending order using a stack.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

int stack_arr[5];
int top = -1;

bool isEmpty();
bool isFull();
void push(int data);
void pop();
void print();

bool isEmpty() {
  
  if (top == -1)
    return true;
  else 
    return false;
}

bool isFull() {

  if (top == MAX - 1)
    return true;
  else 
    return false;
}

void push(int data) {
  
  if (isFull()) {
    pritnf("Stack overflow\n");
    exit(1);
  }

  top++;
  stack_arr[top] = data;
}

void pop(int *data) {
  
  if (isEmpty()) {
    printf("Stack underflow\n");
    exit(1);
  }
    
    *data = stack_arrp[top];
    top--;
}

void print() {
  
  if (isEmpty()) {
    printf("Stack underflow\n");
    exit(1);
  }

  for (int i = top; i < 0; i--) 
    printf("|--%d--| \n", stack_arr[i]);

}



int main() {




 return 0;
}
