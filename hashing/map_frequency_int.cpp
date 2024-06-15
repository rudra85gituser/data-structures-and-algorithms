#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creating array
    int size;
    cin>>size;
    int arr[size];
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }

    //creating map using c++ stl
    
    map<int , int> m;//here first integer is for number and secong integer is for frequency/value 
    for(int i=0;i<size;i++)
    {
        m[arr[i]]++;//if the element which is present at arr[i]  then in map the value/frequency of the current positioned number will get increased
    }


    //in map the elements get stored in the sorted order
    for(auto it: m)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }


    int query;
    cin>> query;
    while(query--)
    {
        int number;
        cin>> number;

        //now fetch the frequency of that number using map arrey


        //it will print thew frequency /value part of the map
        cout<<m[number]<<endl;
    }


    return 0;



}