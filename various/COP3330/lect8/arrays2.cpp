#include <iostream>
using namespace std;

void traverseArray(int arr[], int n) {
  cout << "Array elements: ";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;
}

void updateValue(int arr[], int n, int index, int newValue) {
  if (index >= 0 && index < n)
    arr[index] = newValue;
  else
    cout << "Invalid index!" << endl;
}

int sumArray(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) sum += arr[i];
  return sum;
}

void findMinMax(int arr[], int n, int& minVal, int& maxVal) {
  minVal = maxVal = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < minVal) minVal = arr[i];
    if (arr[i] > maxVal) maxVal = arr[i];
  }
}

int searchElement(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) return i;
  }
  return -1;
}

void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int arr[] = {5, 2, 9, 1, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Initial array:\n";
  traverseArray(arr, n);

  cout << "\nUpdating index 2 with value 10...\n";
  updateValue(arr, n, 2, 10);
  traverseArray(arr, n);

  cout << "\nSum of elements: " << sumArray(arr, n) << endl;

  int minVal, maxVal;
  findMinMax(arr, n, minVal, maxVal);
  cout << "Minimum: " << minVal << ", Maximum: " << maxVal << endl;

  int target = 10;
  int pos = searchElement(arr, n, target);
  if (pos != -1)
    cout << "Element " << target << " found at index " << pos << endl;
  else
    cout << "Element " << target << " not found" << endl;

  cout << "\nSorting array using insertion sort...\n";
  insertionSort(arr, n);
  traverseArray(arr, n);

  return 0;
}
