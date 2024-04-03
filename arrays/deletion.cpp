//delete a element at a given location
//algorithm deletion
// user input arrey limit (n),location of element(loc)
//set j=k;
//while(j<=n-2)
//a[i]=a[i+1];
//i++;
//n=n-1;
#include<iostream>
using namespace std;
int main()
{
    int n,loc,ele;
    cout<<"enter the limit of arrey"<<endl;
    cin>>n;
    cout<<"enter the place you want to delete element"<<endl;
    cin>>loc;
    cout<<"enter the elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=loc;
    while(j<n-2)
    {
        arr[j]=arr[j+1];
         j=j+1;   
    }
    n=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
    }