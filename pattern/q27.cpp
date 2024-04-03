//method 1 listed below
//method 2 by formula 'a'+row-1
#include<iostream>
 using namespace std;
 int main()
 {
    int n;
    char q='A';
    cout<<"enter the limit"<<endl;
    cin>>n;
    int i=1;
        while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<q;
            j++;
        }
        cout<<endl;
        q++;
        i++;
}
return 0;
    }