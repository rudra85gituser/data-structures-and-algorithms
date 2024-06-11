#include<bits/stdc++.h>
using namespace std;


//priority queue
//largest element stays at the top

void explainPriority_queue()
{
    priority_queue<int>pq;

    // there are mainly three functions push , pop , top
    //and all other functions are same


    //this is also known as max heap 
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(5);//similar to push
    
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();
    

    //min heap

    priority_queue<int , vector<int> , greater<int>> pq;

    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.emplace(5);//similar to push

    cout<<pq.top();
}