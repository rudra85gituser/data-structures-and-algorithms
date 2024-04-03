// This program was made by Rudra Yadav (221B312)
#include <iostream>
using namespace std;
int element(int arr[], int size) {
    if (size == 0) {
        return -1;
    }
    int maxElement = arr[0];
    int maxCount = 1;
    for (int i = 0; i < size; i++) {
        int currentElement = arr[i];
        int currentCount = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] == currentElement) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxElement = currentElement;
        }
    }

    return maxElement;
}
int main() {
    int arr[] = { 2, 4, 5, 6, 8, 9, 10, 13, 2, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = element(arr, size);
    if (result != -1) {
        cout << "The maximum frequency is" << result << endl;
    }
    return 0;
}
//Time Complexity = O(n^2)
