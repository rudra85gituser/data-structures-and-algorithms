#include<iostream>
 using namespace std;
 int main()
 {
    int n,p=1;
    cout<<"enter the limit"<<endl;
    cin>>n;
    int i=1;
        while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<p<<" ";
            p++;
            j++;
        }
        cout<<endl;
        i++;
}
    }