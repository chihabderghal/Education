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
int peek(); // function to get the top data in the stack.

bool isFull() {
  if (top == MAX - 1)
    return true;
  else
    return false;
}

bool isEmpty() {
  
  if (top == -1)
    return true;
  else 
    return false;
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

int peek() {
  
  if (isEmpty()) {
    printf("Stack underflow");
    exit(1);
  }

  return stack_arr[top];
}

int main() {
  
  int choice, data;   

  while (1) {
    printf("\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. print the top element\n");
    printf("4. Print all the elements of the stack\n");
    printf("5. Quit\n");
    printf("Please enter your choice : ");
    scanf("%d", &choice);

   switch (choice) {
    case 1:
      printf("Enter the element to be pushed : ");
      scanf("%d", &data);
      push(data);
      break;
    
    case 2:
      data = pop();
      printf("Deleted element is %d\n", data);
      break;

    case 3:
      printf("The top value in the stack is : %d\n", peek());
      break;

    case 4:
      print();
      break;

    case 5:
      exit(1);

    default:
      printf("!ERROR!, type the number again\n");
   }
  }

  return 0;
}
