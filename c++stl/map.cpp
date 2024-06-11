#include<bits/stdc++.h>
using namespace std;

//map


void explainMap()
{
    map<int , int> m;
    map<int , pair<int,int>> m;
    map<pair<int , int> , int> m;

    //multiple way to store keys and values
    m[1] = 2;//at key 1 stores 2

    m.emplace({3,1});

    m.insert({2,4});

    m[{2,3}] = 10;//key is 2,3 and value is 10

    //everyhthing stores in sorted order
    

    //to display keys and values
    for (auto it :m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }

    //to access the values using keys
    cout<<m[1];
    cout<<m[5];

    auto it = m.find(3);
    cout<<*(it).second;

    auto it = m.find(5);





   //other funcirons are same as above

}