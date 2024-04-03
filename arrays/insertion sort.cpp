//algorithm bubble sort
//moving from left to right
//arrange ment of elements either in ascending order or in descending order
//user input array limit and array elements
//for(i=1 to n)
//j=i-1
//key = a[i]
//while(j>0&&a[j]>key)
//a[j+1]=a[j]
//j=j-1
#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"enter the limit of arrey"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   for(int i=1;i<n;i++)
   {
   int key=arr[i];
   int j=i-1;
   while(j>=0&&arr[j]>key)
   {
    arr[j+1]=arr[j];
   }
   j=j-1;
   }
    cout<<"new arrey elements are";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
   }