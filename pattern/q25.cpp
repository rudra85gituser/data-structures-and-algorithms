//method 1 char a='a' and  a++
//method 2 cout<<'a'+r-1
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
        while(j<=n)
        {
            cout<<q;
            q++;
            j++;
        }
        cout<<endl;
        q='A';
        i++;
}
return 0;
    }