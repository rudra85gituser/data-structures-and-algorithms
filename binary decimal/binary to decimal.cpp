#include<iostream> 
using namespace std;
int main()
{
    int n;
    cout << "enter a binary number" << endl;
    cin >> n;
    int answer=0;
    int base=1;
    int digit=0;
    while(n!=0)
    {
    digit=n%10;
    answer=answer+digit*base;
    base=base*2;
    n=n/10;
    }
    cout<<"answer is"<<answer<<endl;
    return 0;
    }