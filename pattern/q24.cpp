//method 1 char a='a' and  a++
//mer\thod 2 cout<<'a'+r-1
#include<iostream>
 using namespace std;
 int main()
 {
    int n;
    char c='A';
    cout<<"enter the limit"<<endl;
    cin>>n;
    int i=1;
        while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<c;
            j++;
        }
        cout<<endl;
        c=c+1;
        i++;
}
return 0;
    }