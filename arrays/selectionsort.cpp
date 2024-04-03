//algorithm selection sort
//moving from left to right
//arrange ment of elements either in ascending order or in descending order
//user input array limit and array elements
//for(i=0;i<n-1;i++)
//min=i and minterm=array[i]
//for(j=i+1;j<n;j++)
//if(a[min]>a[j])
//min=j and minterm=arrar[j]
//swapping after j loop
//if(min!=i)
//temp=array[min]
//array[min]=array[i]
//array[i]=min
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
   for(int i=0;i<n;i++)
   {
      int min=i;
      int minvalue=arr[i];
      for(int j=i+1;j<n;j++)
      {
        if(arr[min]>arr[j])
        {
            
            min=j;
            minvalue=arr[j];
        }
        if(min!=i)
        {
         temp=arr[min];
         arr[min]=arr[i];
         arr[i]=temp;
        }
      }
   }
    cout<<"new arrey elements are";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
   }
