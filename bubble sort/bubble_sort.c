// ID : 2021200010011
//Name : Hasibul Hossain Santo Sheikh

//question start

// Perform bubble sort on following list in a ascending order.
// {2,7,4,9,11,7,13,9}

//question end

#include <stdio.h>

void bubbleSort(int array[], int size) {
  int swaped = 0;
  for (int i = 0; i < size - 1; ++i) {
    for (int j = 0; j < size - i - 1; ++j) {
      if (array[j] > array[j + 1]) {
        int tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;

        swaped = 1;
      }
    }
    if (swaped == 0) {
      break;
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = { 2, 7, 4, 9, 11, 7, 13, 9 };

  int size = sizeof(data) / sizeof(data[0]);

  bubbleSort(data, size);

  printf("Bubble sort in Ascending Order:\n");
  printArray(data, size);
}

// output : 2,4,7,7,9,9,11,13