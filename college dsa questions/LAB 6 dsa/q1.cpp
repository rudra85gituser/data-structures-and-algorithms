// This program was made by Rudra Yadav (221B312)
random_num_generator.h
int* Rdm(int n){
    int *arr = new int (n);
    for(int i=0;i<n;i++){
        arr[i] = rand()%100;
    }
    return arr;
}
221b312_lab6_q1
#include <iostream>
#include "random_num_generator.h"
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *array = Rdm(n);
    cout << "Random numbers between 0 and 99:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    delete[] array;
    return 0;
}
//Time Complexity = O(n) 
