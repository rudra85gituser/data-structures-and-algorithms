//algorithm binary search
//user input arrey limit(n), arrey elements,and item to be found(ele)
//initiliaze low=0,high=n-1,and count=0
//sot the array in ascending order
//mid=(low+high)/2
//if a[mid]==item
//count=count+1
//break;
//else if(item<a[mid])
//high=mid-1;
//else(item>a[mid])
//low=mid+1
//if count>0 element is present 
//else element is not present
#include<iostream>
using namespace std;
int main()
{
    int n,item;
    cout<<"enter the limit of arrey"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    int a[n];
    for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
    cout<<"enter the element you want to find"<<endl;
    cin>>item;
    int temp=0;
    for(int i=0;i<n;i++)
    {
     if(a[i]>a[i+1])
       {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
       }
    }
    int low=0,high=n-1,count=0;
    while(low<=high)
    {
    int mid=(low+high)/2;
      if(item==a[mid])
       {
        count=count+1;
         break; 
       }
      else if(item<a[mid])
       {
       high=mid-1;
       }
      else(item>a[mid]);
       {
        low=mid+1;
       }
    }
    if(count>0)
    {
      cout<<"element is present"<<endl;
    }
    else
    {
      cout<<"element is not present"<<endl;
    }
 return 0;
}