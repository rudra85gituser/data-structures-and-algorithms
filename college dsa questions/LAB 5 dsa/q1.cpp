// This program was made by Rudra Yadav (221B312)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,low,high,pos=-1,mid;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int item;
    cin>>item;
    low=arr[0];high=arr[n-1];
    while(low<=high){
        mid=(low+high)/2;
        if(item>arr[mid])
            low=mid+1;
        else
            high=mid-1;
        if(arr[mid]==item){
            pos=mid;
            break;
        }
    }
    cout<<pos;
    return 0;
}
//Time Complexity = O(logn) 
