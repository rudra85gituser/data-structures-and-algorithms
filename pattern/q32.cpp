#include<iostream>
 using namespace std;
 int main()
 {
    int n,a=1;
    cout<<"enter the limit"<<endl;
    cin>>n;
    int i=1;
        while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while (k<=i)
        {
            cout<<a;
            k++;
        }
        a++;
        cout<<endl;
        i++;
}
return 0;
    }