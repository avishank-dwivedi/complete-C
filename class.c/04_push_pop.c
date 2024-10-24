/*#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int element) {
  if (top == MAX_SIZE - 1) {
    printf("Stack Overflow\n");
    return;
  }

  stack[++top] = element;
}

int pop() {
  if (top == -1) {
    printf("Stack Underflow\n");
    return -1;
  }

  return stack[top--];
}

int main() {
  push(1);
  push(2);
  push(3);

  printf("%d popped from stack\n", pop());
  printf("%d popped from stack\n", pop());
  printf("%d popped from stack\n", pop());

  return 0;
}

*/

/*
#include <stdio.h>

int main(){
  int stack[10];
  int top = 0;

  // Push some elements onto the stack
  stack[top++] = 1;
  stack[top++] = 2;
  stack[top++] = 3;

  // Pop an element from the stack
  int element = pop(stack);

  // Print the element that was popped
  printf("%d\n", element);

  return 0;
}

*/

#include <stdio.h>

#define MAX_SIZE 10 // Maximum size of the stack

int stack[MAX_SIZE]; // Stack array
int top = -1; // Initialize top of the stack to -1

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(int element) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = element;
}

// Function to pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    // Push some elements onto the stack
    push(1);
    push(2);
    push(3);

    // Pop an element from the stack
    int element = pop();

    // Print the element that was popped
    printf("%d\n", element);

    return 0;
}
