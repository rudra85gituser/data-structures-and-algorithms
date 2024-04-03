//creating a empty node 
//value of data is 85
//null define node is ended
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    //creating a constructor to store values in nodes
    //name of the constructor same as name as name of class
    //this keyword refers to the current objet in function,method,constructor
    //removes confusion between class attributes and parameters with same name
    Node (int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
int main()
{
    Node* node1 = new Node(85);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    return 0;
}