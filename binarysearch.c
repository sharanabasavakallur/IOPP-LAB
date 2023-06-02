#include <stdio.h>

int binarySearch(int arr[], int low, int high, int x) {
  if (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] > x) {
      return binarySearch(arr, low, mid - 1, x);
    } else {
      return binarySearch(arr, mid + 1, high, x);
    }
  } else {
    return -1;
  }
}

int main() {
  int arr[] = {1, 3, 5, 7, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 5;

  int index = binarySearch(arr, 0, n - 1, x);

  if (index == -1) {
    printf("Element not found\n");
  } else {
    printf("Element found at index %d\n", index);
  }

  return 0;
}

