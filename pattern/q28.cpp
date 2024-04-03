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
        char q='A'+n-i;
        while(j<=i)
        {
            cout<<q;
            q=q+1;
            j++;
        }
        cout<<endl;
        i++;
}
return 0;
    }