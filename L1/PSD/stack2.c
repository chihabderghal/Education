// Program to impliment a stack in an array using stack_arr[0] as the top element.
// do the same with pop() function.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void push(int data);
void print();
void pop();
bool isEmpty();
bool isFull();

bool isEmpty() {
  
  if (first == -1)
    return true;
  else 
    return false;
}

bool isFull() {
  
  if (first == MAX - 1)
    return true;
  else 
    return false;
}


// int pop();

/*int pop() {
 *
 *  int value;
 *
 *  value = stack_arr[0];
 *  for (int i = 0; i <= first; i++)
 *    stack_arr[i] = stack_arr[i + 1];
 *     first--;
 *
 *  return value;
 * }
 * */

void push(int data) {
  
  first++;
  for (int i = first; i > 0; i--) 
    stack_arr[i] = stack_arr[i - 1];

  stack_arr[0] = data;
}

void pop(int *value) {

  *value = stack_arr[0];
  for (int i = 0; i <= first; i++ ) 
    stack_arr[i] = stack_arr[i + 1];
    first--;
}

void print() {

  if (isEmpty()) {
    printf("Underflow\n");
    exit(1);
  }

  for (int i = 0; i <= first; i++)
    printf("|--%d--| \n", stack_arr[i]);
}

int main() {
  
  int data;

  push(10);
  push(20);
  push(30);
  push(40);
  push(50);

  pop(&data); 
  pop(&data); 
  pop(&data); 


  print();

  return 0;
}
