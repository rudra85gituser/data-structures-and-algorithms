#include<bits/stdc++.h>
using namespace std;


//set
//sorted
//unique
void explainSet()
{
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);//output = 1,2,3,4


    //functionailty of inserting in vector can also be used  , that only increases the efficiency

    // all other functions are same as other


    auto it = st.find(3);// it returns an iterator which points to 3
    auto it = st.find(6);//if elements is not present it points to the end


    int cnt = st.count(1);//if one is there then it returns 1 else 0
    //there is no repeatition of elements


    // we can erase by passing th evalue 
    st.erase(5);
    //we can also erase by passing the iterator
    auto it = st.find(3);
    st.erase(it);



    //to delete/erase elements in a given range
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1 , it2);


    auto it = st.lower_bound(2);
    auto it = st.lower_bound(3);



//everyhtins happen in logethermic
}