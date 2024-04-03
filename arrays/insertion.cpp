//insert a element at a given location
//algorithm insertion
// user input arrey limit (n),location of element(loc),element(ele)
//set j=n;
//while(j=>loc)
//a[i]=a[i-1];
//i--;
//a[loc]=ele;
//n=n+1;
#include<iostream>
using namespace std;
int main()
{
    int n,loc,ele;
    cout<<"enter the limit of arrey"<<endl;
    cin>>n;
    cout<<"enter the place you want to insert element"<<endl;
    cin>>loc;
     cout<<"enter the element you want insert"<<endl;
    cin>>ele;
    cout<<"enter the elements of aeeay"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=n;
    while(j>loc)
    {
        arr[j]=arr[j-1];
        j=j-1;   
    }
    arr[loc]=ele;
    n=n+1;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
    }