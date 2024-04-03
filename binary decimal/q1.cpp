// to weire a number 2,5,8 in the form of 258(same flow) or in the form of 852(reverse order)
//formula for reverse order answer=digit*i+answer
//formula for same flow answer=answer*10+digit 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{


//in same flow
int digit1=2;
int digit2=5;
int digit3=8;
int ans=0;
ans=ans*10+digit1;
ans=ans*10+digit2;
ans=ans*10+digit3;
cout<<ans;

//in reverse order
int digit11=5;
int digit22=6;
int digit33=7;
int an=0;
int i=0;
an=digit11*pow(10,i)+an;
i++;
an=digit22*pow(10,i)+an;
i++;
an=digit33*pow(10,i)+an;
cout<<an;
return 0;
}