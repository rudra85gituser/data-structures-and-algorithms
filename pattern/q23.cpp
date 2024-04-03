#include<iostream>
 using namespace std;
 int main()
 {
    cout<<"method 1"<<endl;
    int n;
    cout<<"enter the limit"<<endl;
    cin>>n;
    int i=1;
        while(i<=n)
    {
        int j=1;
        int counter=i;
        while(j<=i)
        {
            cout<<counter;
            counter--;
            j++;
        }
        cout<<endl;
        i++;
}
    cout<<"method 2"<<endl;
    int r;
    cout<<"enter the limit"<<endl;
    cin>>r;
    int p=1;
        while(p<=r)
    {
        int q=1;
        while(q<=p)
        {
            cout<<p-q+1;
            q++;
        }
        cout<<endl;
        p++;
}
return 0;
    }