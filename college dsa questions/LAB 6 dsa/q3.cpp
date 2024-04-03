// This program was made by Rudra Yadav (221B312)
#include<iostream>
#include "random_num_generator.h"
using namespace std;

int main(){
int n; cin >> n;
int *a = Rdm(n);
for(int i=0;i<n-1;i++){
    int min = i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min = j;
        }}
    if(min_index!=i){
        int temp = a[min_index];
        a[min_index] = a[i];
        a[i] = temp;
    }
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << '\n';
}
return 0;}
//Time Complexity = O(n^2) 