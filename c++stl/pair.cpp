#include<bits/stdc++.h>
using namespace std;

//pairs
 
void explainPair()
{
    pair<int,int >q={1,2};
    cout<< q.first<<" "<<q.second<<endl;
    

    pair<int,pair<int,int>>p={1,{11,22}};
    cout<< p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

    pair<int,int>arr[]={{1,2},{2,3},{3,4}};
    cout<<arr[1].second;



}
