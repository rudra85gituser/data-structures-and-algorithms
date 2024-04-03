// write a program to multiply two numbers using addition
#include<iostream>
using namespace std;
int sum=0;
int addition(int a,int b)
{
    for(int i=1;i<=b;i++)
    {
        sum=sum+a;
    }
    return sum;
}
int main()
{
    int num1;
    int num2;
    cout<<"enter the numbers"<<endl;
    cin>>num1;
    cin>>num2;
   int ans= addition(num1,num2);
   cout<<ans;
    return 0;
}