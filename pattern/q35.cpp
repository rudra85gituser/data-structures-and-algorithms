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
        while(j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while (k<=i)
        {
            cout<<k;
            k++;
        }
        int s=i-1;
        while(s)
        {
            cout<<s;
            s=s-1;
        }
        cout<<endl;
        i++;
}
return 0;
    }