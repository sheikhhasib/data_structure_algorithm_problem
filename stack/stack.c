#include <stdio.h>

int maxSize = 8;
int stack[8];
int top = -1;

// Checking if array is empty
int isEmpty() {
  if (top == -1) {
    return 1;
  }
  return 0;
}

// Checking if array is full
int isOverflow() {
  if (top > maxSize) {
    return 0;
  }
  return 1;
}

// insert a element
int push(int val) {
  if (isOverflow()) {
    top = top + 1;
    stack[top] = val;
    return val;
  } else {
    printf("Insert not possible, stack is full");
  }
}

// delete a element 
int pop() {
  if (!isEmpty()) {
    int result = stack[top];
    top = top - 1;
    return result;
  }
}

// Output display 
void printValue() {
  if (isEmpty()) {
    printf("stack is empty");
  } else {
    for (int i = top; i >= 0; i--) {
      printf("%d\n", stack[i]);
    }
  }
}

int main() {
  push(5);
  push(10);
  push(12);
  printf("show stack\n");
  printValue();
  pop();
  printf("show stack\n");
  printValue();
  pop();
  printf("show stack\n");
  printValue();

  return 0;

}