#include<bits/stdc++.h>
using namespace std;

//formula to place the character in hash array 
//formula = char - 'a 
//a will reach at position 0 in hash array
//b will reach at position 1 in hash array


int main()
{
    string s ;
    cin>> s;


    //creating hash for frequency
    // we  know that there are only lower case string and character
    

    //if we require all the character  (upper , lower , special case)
    //int hash[256] = {0};
    //this will also give the correct answer as other spaces will remain 0

    int hash[26] = {0};
    for(int i =0; i<s.size();i++)
    {
         hash[s[i]-'a'] +=1;
    }

    //pre compute  - basically entering the number of queries/or number of character whose frequency we want to find 

    int query;
    cin>>query;
    while(query--)
    {
        char ch;
        cin>> ch;

        // fetch the frequency from the hash array

        cout<<hash[ch-'a']<<endl;
    }

    return 0;
}