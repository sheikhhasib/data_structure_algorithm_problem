// ID: 2021200010011
//Name: Hasibul Hossain Santo Sheikh

// question start 

//Write a program to Perform linear search Operation. Take an array from console,
//{4,10,36,4,6,5,10}and find 5 in the list and print the address where item found.

// question end 

#include <stdio.h>

int search(int items[], int n, int x) {
  for (int i = 0; i < n; i++)
    if (items[i] == x)
      return i;
  return -1;
}

int main() {
  int items[] = { 4, 10, 36, 4, 6, 5,10 };
  int x = 5;
  int n = sizeof(items) / sizeof(items[0]);

  int result = search(items, n, x);

  if (result == -1) {
    printf("Item not found");
  } else {
    printf("Item found at : %d\n", result);
  }
}

//output 5 