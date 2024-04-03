// This program was made by Rudra Yadav (221B312)
#include<iostream>
using namespace std;

int fun1(int a[],int size)
{
     int index;
    for(int i=0;i<size-1;i++)
    {
     if(a[i]>a[i+1])
        {
            index = i+1;
            break;
        }
     } 
    return index;
}
int main(){
 int n,pos;
 cout<<"Input the size of the array: ";
 cin>>n;
 int arr[n];
 cout<<"Input your array: ";
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
    }
     pos = fun1(arr,n);
 cout<<"Desired index = "<<pos; 
  return 0;
}
//Time Complexity = O(n)

