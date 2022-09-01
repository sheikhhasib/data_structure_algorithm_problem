#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#include <stdbool.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

bool isEmpty() {
  return itemCount == 0;
}

bool isFull() {
  return itemCount == MAX;
}

int size() {
  return itemCount;
}

void enqueqe(int data) {

  if (!isFull()) {

    if (rear == MAX - 1) {
      rear = -1;
    }

    intArray[++rear] = data;
    itemCount++;
  } else {
    printf("Queue is full!\n");
  }
}

int dequeqe() {
  if (!isEmpty()) {
    int data = intArray[front++];

    if (front == MAX) {
      front = 0;
    }

    itemCount--;
    return data;
  } else {
    printf("Queue is Empty!\n");
  }
}

void showQueqe() {
  if (!isEmpty()) {
    int i = front;
    while (i <= rear) {
      printf("%d ", intArray[i]);
      i++;
    }
  } else {
    printf("Queue is Empty!\n");
  }

}

int main() {
  enqueqe(3);
  enqueqe(5);
  enqueqe(9);
  enqueqe(1);
  enqueqe(12);
  enqueqe(15);
  printf("All items: ");
  showQueqe();
  int itemDeleted = dequeqe();
  printf("\n");
  printf("deleted item : %d\n", itemDeleted);
  printf("All items: ");
  showQueqe();
}