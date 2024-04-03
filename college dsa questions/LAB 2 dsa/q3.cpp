// write a program to find gcd of numbers
#include<iostream>
using namespace std;
int sum=0;
int fungcd(int s,int a,int b)
{
    int gcd;
    for(int i=1;i<=s;i++)
    {
       if(a%i==0&&b%i==0)
       {
        gcd=i;
       }
    }
    return gcd;
}
int main()
{
    int num1;
    int num2;
    int small;
    cout<<"enter the numbers"<<endl;
    cin>>num1;
    cin>>num2;
    if(num1>num2)
    {
        small=num2;
    }
    else{
        small=num1;
    }     
   int ans= fungcd(small,num1,num2);
   cout<<ans;
    return 0;
}