 //linear search algorithm
 //count=0
 //user input limit amd eleemnts
 //for(i=0 to n-1)
 //a[i]=element
 //count==1 and pos=a[i]
 //break
 //if count>0
// element found
#include<iostream>
using namespace std;
int main()
{
    int n,ele;
    cout<<"enter the limit of arrey"<<endl;
    cin>>n;
    cout<<"enter the elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element you want to find"<<endl;
    cin>>ele;
    int count=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]==ele)
    {
    count++;
    }
   }
   if(count==1)
   {
    cout<<"element is present"<<endl;
   }
   else
   {
    cout<<"element is not present"<<endl;
   }
 return 0;
}