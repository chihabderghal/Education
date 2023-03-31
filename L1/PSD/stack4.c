// Program to convert the decimal number into binary

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define Max 100

int stack_arr[Max];
int first = -1;


bool isFull();
bool isEmpty();
void push(int data);
void print();
void binary(int data);

bool isFull() {
  
  if (first == Max - 1)
    return true;
  else 
    return false;
}

bool isEmpty() {

  if (first == -1)
    return true;
  else
    return false;
}

void push(int data) {
  
  if (isFull()) {
    printf("Stack overflow\n");
    exit(1);
  }

  first++;
  for (int i = first; i > 0; i--) 
    stack_arr[i] = stack_arr[i - 1];

  stack_arr[0] = data;

}

void print() {
  
  if (isEmpty()){
    printf("Stack underflow\n");
    exit(1);
  }

  for (int i = first; i >= 0; i--)
    printf("|--%d--| \n", stack_arr[i]);

}

void binary(int data) {
  
  int mod, i = 2;

  while (data != 0) {
    mod = data % i;
    data = data / i;
    push(mod);
   }

}


int main() {

  int number;

  printf("Type the number : ");
  scanf("%d", &number);

  binary(number);
  print();
  
  return 0;
}
