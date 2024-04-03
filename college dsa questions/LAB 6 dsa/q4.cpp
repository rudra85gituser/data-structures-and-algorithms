// This program was made by Rudra Yadav (221B312)
#include <iostream>
#include "random_num_generator.h"
using namespace std; 
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        for (int k = 0; k < n; ++k) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* array = Rdm(n); 
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    insertionSort(array n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
//Time Complexity = O(n^2) 
