#include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"enter the limit"<<endl;
    cin>>n;
    int i=1;
        while(i<=n)
    {
        int j=1;
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        int k=1;
        while (k<=i-1)
        {
            cout<<"*";
            k++;
        }
        int l=1;
        while(l<=i-1)
        {
            cout<<"*";
            l++;
        }
        int m=1;
        int q=n-i+1;
        while(m<=n-i+1)
        {
            cout<<q;
            m++;
            q--;
        }
        cout<<endl;
        i++;
}
return 0;
    }