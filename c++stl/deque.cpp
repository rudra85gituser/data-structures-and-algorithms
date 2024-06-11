#include<bits/stdc++.h>
using namespace std;

//deque

void explainDeque()
{
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(4);

    dq.push_front(5);
    dq.emplace_front(1);
    
    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    //all other function are same as list , vector

}