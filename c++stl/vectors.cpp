#include<bits/stdc++.h>
using namespace std;

//vectors

void explainVectors()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(2);
    v.emplace_back(2);
    
    //now pushback and emplace bace is similar

    //emplace back is more faster than push back

    //In C++, both emplace_back and push_back are member functions of the std::vector (and other STL containers like std::deque, std::list, etc.) used to add elements to the end of the container. However, they have some differences in terms of functionality and performance:

    //difference

    /*push_back
    Functionality: Adds an element to the end of the vector.
    Usage: Typically requires an existing object to be passed in.
    Performance: Involves a copy or move operation. If an object is passed, it will be copied or moved into the container.

    emplace_back
    Functionality: Constructs an element in place at the end of the vector.
    Usage: Constructs the element directly in the memory location at the end of the vector, avoiding unnecessary copy or move operations. This can be more efficient for complex objects.
    Performance: More efficient in some cases because it avoids extra copying/moving. It directly constructs the object in place using the provided arguments.
    */

   //vactor of a pair datatype
   vector<pair<int,int>>ve;
   ve.push_back({1,2});
   ve.emplace_back(1,3);// we do not want to pass elements in pair format emplace automatically converts element in pair format

   vector<int>vec(5,100);//a container of size 5 with 5 instances of values which are passed is created eg {100,100,100,100,100}

   // to copy a set of values of defined size
   vector<int> vect1(5,20);
   vector<int> vect2(vect1);

   // we can modify the size of vctor even after defining the size

   //to access the elements of the vector
   //4 ways
   // array
   // iterator
   // loop
   // for each loop

   //one --- like array
   cout<<v[0]<<" ";
   //or
   cout<<v.at(0)<<" ";

   cout<<v.back()<<" ";
   cout<<endl;


   // two--- using iterator
   //iterator pointa ti the memory where the        elements is located
   // points to the memory address
   //to access any value in the memory we use pointer (*)

   vector<int>::iterator it  = v.begin();
   it++;
   cout<<*(it)<<" ";
   it =it+2;
   
   vector<int>::iterator it  = v.end();//points to second last elements
   vector<int>::iterator it  = v.rend();//reverse the vector and then point to end basically first element
   vector<int>::iterator it  = v.rbegin();//reverse the vector and points to begin , basically last element


   //3 --- using loop
   for(vector<int>::iterator it= v.begin(); it!=v.end(); it++)
   {
    cout<<*(it)<<" ";
   }

   //to avoid this vector<int>::iterator  syntax we use auto
   //auto automatically asigns the datatype
   for(auto itt = v.begin(); itt!=v.end(); it++)
   {
    cout<<*(it)<<" ";
   }

   //3 --- using for each loop
   for(auto it : v)
   {
     cout<<it<<" ";
   }

   //erase or delete elements


}