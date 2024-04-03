//creating a empty node 
//value of data is zero
//address of node is zero
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
//functions out of class
void insertend(Node* &end,int data)
{
    Node* temp = new Node(data);
    end->next=temp;
    end=end->next;
}
void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    //new node create
    Node* node1 = new Node(85);
    //start pointed to node1
    Node* start=node1;
    Node* end=node1;
    print(start);
    insertend(end,12);
    print(start);
    insertend(end,98);
    print(start);
    return 0;
}