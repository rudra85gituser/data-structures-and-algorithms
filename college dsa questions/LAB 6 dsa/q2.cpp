// This program was made by Rudra Yadav (221B312)
#include<iostream>
#include "random_num_generator.h"
using namespace std;
int main(){
int state, n; cin >> n;
int *a = Rdm(n);
for(int i=0;i<n-1;i++){
    state=0;
    for(int j=0;j<n-i-1;j++)
    {
         if(a[j]>a[j+1])
        {
          int temp = a[j]; a[j]=a[j+1];
          a[j+1] = temp;
          state=1;
        }
    }
     for(int i=0;i<n;i++)
     cout << a[i] << " ";
     cout << '\n';
    if(state==0)
    {
         break;
    }
}
return 0;
}
//Time Complexity = O(n^2) 