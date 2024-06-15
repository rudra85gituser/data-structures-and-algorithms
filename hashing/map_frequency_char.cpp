#include<bits/stdc++.h>
using namespace std;

int main()
{
    //creating array
    string s;
    cin>>s;
    
  

    //creating map using c++ stl
    
    map<char , int> m;//here first integer is for number and secong integer is for frequency/value 
    for(int i=0;i<s.size();i++)
    {
        m[s[i]]++;//if the element which is present at arr[i]  then in map the value/frequency of the current positioned number will get increased
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
        char character;
        cin>> character;

        //now fetch the frequency of that number using map arrey


        //it will print thew frequency /value part of the map
        cout<<m[character]<<endl;
    }


    return 0;



}