#include<bits/stdc++.h>
using namespace std;
//globally outside main max size of array which we can decLARE is 10^7=1000000 
// int hash[10^7] ={0};
int main()
{
    //creating and inserting arey
    int size ;
    cin>> size ;
    int arr[size];
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

     //locally inside main max size of array which we can decLARE is 10^6=1000000 
     // int hash[10^6] ={0};
    //precompute the frequency in hash array
    int hash[13] = {0};//suppose max size of the array is 13


    // max size of array is because there are 0 - to - 12 elements

    for(int i=0; i<size;i++)
    {
        hash[arr[i]] +=1;
    }

    int query;
    cin>> query;
    while(query--)
    {
        int number;
        cin>> number;

        //now fetch the frequency of that number using hash arrey

        cout<<hash[number]<<endl;
    }


    return 0;
}