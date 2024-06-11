#include<bits/stdc++.h>
using namespace std;

void explainExtra()
{
    int n;
    cin>>n;
    int arr[] = {1,5,4,3};
    

    //sort in ascending order
    sort(arr,arr+n);
    sort(v.begin(), v.end());
    sort(arr+2,arr+4);


    //sort in descending order
    pair<int , int> a[] = {{1,2},{2,1},{4,1}};

    //sort in ascending order to second element
    //if second eleemnt is sme then sort
    sort(a  , a+n , comp);
}

bool comp(pair<int , int>p1 , pair<int, int>p2)
{
    if(p1.second<p2.second)
    {
        return true;
    }
    if(p1.second>p2.second)
    {
        return false;
    }
    if(p1.first=p2.first)
    {
        return true;
    }
    else{return false;}
}