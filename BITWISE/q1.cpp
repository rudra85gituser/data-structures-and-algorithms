//a=0100
//b=0110
//not of ~a =1011 , one in starting so find 1 complement 0100 and add one 0101 equal to 5 and -0101=-5 ans
//xor =0010=2 
#include<iostream>
using namespace std;
int main()
{

    int n;
    int a=4;
    int b=6;
    cout<<"and operator"<<(a&b)<<endl;
    cout<<"or operator"<<(a|b)<<endl;
    cout<<"not operator"<<~a<<endl;
    cout<<"xor operator"<<(a^b)<<endl; 

    //left shift  >>
    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    //right shift  <<
    cout<<(19<<1)<<endl;
    cout<<(21<<1)<<endl;
    cout<<(17<<1)<<endl;

    //pre inc/dec
    int i=5;
    cout<<++i<<endl;
    cout<<--i<<endl;
    //post inc/dec
    cout<<i++<<endl;
    cout<<i--<<endl;

    //break statement 
    int q;
    cin>>q;
    for(int i=2;i<q;i++)
    {
        if(q%i==0)
        {
            cout<<"number is not prime";
            break;
        }
    }
    // continue statement
    for(int w=1;w<=5;w++)
    {
        cout<<"HELO"<<endl;
        continue;
        cout<<"hiii"<<endl;
    }

    //scope of variables
    int aa=2;
    cout<<aa<<endl;
    if (true)
    {
        aa=5;
        cout<<aa<<endl;
    }
    cout<<aa<<endl;
     return 0;
}