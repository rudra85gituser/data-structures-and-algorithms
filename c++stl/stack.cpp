#include<bits/stdc++.h>
using namespace std;

//stack = LIFO

void explainStack()
{
    stack<int>st;

    // there are mainly three functions push , pop , top
    //and all other functions are same 
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);//similar to push
    //5,3,3,2,1,
    cout<<st.top();//element on top or first element
    st.pop();
    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();//returns boolean

    stack<int>st1 , st2;
    st1.swap(st2);


    //all functions happen in O(1)
    

}