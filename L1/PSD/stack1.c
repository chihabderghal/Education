// Array implementaion of stacks. 

#include <stdio.h> 
#define MAX 4

int stack_arr[MAX];
int top = -1;  // indicates that the stack is empty.

void push(int data);

// function to push data in stack.
void push(int data) {

  if (top == MAX - 1) {
    printf("Stack overflow\n");
    return; // indicate the end of the function.
  }

  top =+ 1;
  stack_arr[top] = data;
}

int main() {
  push(1);
  push(2);
  push(3);
  push(4);


  return 0;
}
