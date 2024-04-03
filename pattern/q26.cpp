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
        while(j<=n)
        {
            char q='A'+i+j-1;
            cout<<q;
            j++;
        }
        cout<<endl;
        i++;
}
return 0;
    }