//WAP TO PERFORM X TO THE POWER Y WITHOUT USING POWER FUNCTION
#include<iostream>
using namespace std;
int sum=0;
int function(int a,int b)
{
    int pow;
    for(int i=1;i<=b;i++)
    {
     pow*=a;
    }
    return pow;
}
int main()
{
    int base,power;
    cout<<"enter the base and power"<<endl;
    cin>>base;
    cin>>power;
    int ans= function(base,power);
    cout<<ans;
    return 0;
}