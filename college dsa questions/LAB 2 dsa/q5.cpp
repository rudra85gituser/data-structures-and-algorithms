// WAP to convert binary number to decimal nmuber
#include<iostream>
using namespace std;
int sum=0;
int conversion(int binary)
{
     int rem;
     int base=1;
     int decimal;
    while(binary>=0)
    {
        rem=binary%10;
        decimal=decimal+rem*base;
        base=base+2;
        binary=binary/10;
    }
    return decimal;
}
int main()
{
    int n;
    cout<<"enter a binary number"<<endl;
    cin>>n;
    int deci=conversion(n);
    cout<<deci;
     return 0;
}