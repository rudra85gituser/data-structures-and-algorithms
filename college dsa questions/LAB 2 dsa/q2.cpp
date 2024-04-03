// write a program to generate 1^2+2^2+n^2 series
#include<iostream>
using namespace std;
int sum=0;
int fabo(int lim)
{
    for(int i=1;i<=lim;i++)
    {
       sum+=i*i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter the limit of series"<<endl;
    cin>>n;
    int result= fabo(n);
    cout<<result;
}