// wap to find the element that appears maximum times in an arrey
// write a program to generate fabonacci series
#include<iostream>
using namespace std;
int find(int arr[],int lim)
{
  int max;
  int maxfrequency=0;
  int maxelement=0;
  for(int i=0;i<lim;i++)
 {
    for(int j=i+1;j<=lim;j++)
    {
    if(arr[i]==arr[i+1])
    {
        maxfrequency++;
    }
    }
    if (maxfrequency>max)
    {
        max=maxfrequency;
        maxelement=arr[i];
    }
 }
 cout<<"the element appears amximum number of times"<<maxelement<<endl;
 cout<<"the element frequency is"<<maxfrequency<<endl;
 return 0;
}
int main()
{
 int n,q;
 cout<<"enter the limit of arrey"<<endl;
 cin>>n;
 int a[n];
 cout<<"enter the elements of arrey"<<endl;
 for(q=0;q<n;q++)
 {
    cin>>a[q];
 }
find(a,n);
return 0;
}