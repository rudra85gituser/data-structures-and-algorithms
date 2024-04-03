// write a program to generate fabonacci series
#include<iostream>
using namespace std;
int sum=0;
void fabo(int lim,int first,int second)
{
    cout<<first<<second;
    for(int i=2;i<lim;i++)
    {
        sum=first+second;
        first=second;
        second=sum;
        cout<<sum;
    }
}
int main()
{
    int n;
    int a=0;
    int b=1;
    cout<<"enter the limit of series"<<endl;
    cin>>n;
    fabo(n,a,b);
     return 0;
}