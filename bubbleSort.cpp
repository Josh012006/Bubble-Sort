#include <vector>
#include <iostream>

// A function to help swap the elemnts in the array
void swap (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// The main code for the sorting algorithm
void BubbleSort (vector<int>& a) {
  int totalSwaps = 0;
  bool isSorted = false;
   
  while(!isSorted) {
      int swapCount = 0;
      
      for(int i = 0; i < a.size() - 1; i++) {
          if(a[i] > a [i + 1]) {
              swap(&a[i], &a[i + 1]);
              swapCount++;
          }
      }
      
      totalSwaps += swapCount;
      
      if(swapCount == 0) {
          isSorted = true;
      }
  }
}
