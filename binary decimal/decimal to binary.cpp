// any number other than zero 0 is considered as 1 if we do its and&/or^
//conversion of decimal to binary
//devide by 2
//store remainder
//repeat till n becomes 0
//reverse the answer
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter a decimal number" << endl;
    cin >> n;
    int answer =0;
    int i=0;
    int bit=0;
    while(n!=0)
    {
    bit=n&1;
    answer=(bit*pow(10,i))+answer;
    n=n>>1;
    i++;
    }
    cout<<"answer is"<<answer<<endl;
    return 0;
    }
    //to find binary equivalent of negative decimal num eg.-34???