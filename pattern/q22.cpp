// try with another method
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
        int j=1,row=i;
        while(j<=i)
        {
            cout<<row;
            row++;
            j++;
        }
        cout<<endl;
        i++;
}
    }