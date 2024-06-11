#include<bits/stdc++.h>
using namespace std;

//multiset

//sorted
//but not unique

void explainMultiSet()

{
    //everything is same as set 
    //but stores dublicate element also


    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);//deletes all 1's

    int cnt =  ms.count(1);

// to delete singlr element
    ms.erase(ms.find(1));
//to delete range of eleemnt
    ms.erase(ms.find(1) , ms.find(1)+2);
}
 