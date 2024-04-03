//creating a empty node and printing value in main
//value of data is zero
//node contains 0 address
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
};
int main()
{
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    return 0;
}