//algorithm bubble sort
//moving from left to right
//arrange ment of elements either in ascending order or in descending order
//user input array limit and array elements
//for(i=0 to n)
//for(j=0 to n-i)
//if(a[j]>a[j+1])
//temp=a[j]
//a[j]=a[j+1]
//a[j+1]=temp
#include<iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"enter the limit of arrey"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   for(int i=0;i<n-1;i++)
   {
   for(int j=0;j<n-1-i;j++)
   {
    if(a[j]>a[j+1])
    {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
   }
   }
    cout<<"new arrey elements are";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
   }