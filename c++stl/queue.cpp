#include<bits/stdc++.h>
using namespace std;


//queue = FIFO


void explainQueue()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.emplace(1);


    q.back() += 5;

    cout << q.back();

    cout << q.front();

    q.pop();

    cout << q.front();

   //all operations happening in constant time
   //all other function are same as list , vector
}