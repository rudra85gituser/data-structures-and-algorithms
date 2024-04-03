#include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"enter the limit"<<endl;
    cin>>n;
    int i=1,a=1;
        while(i<=n)
    {
        int j=1;
        while(j<=i-1)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while (k<=n-i+1)
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