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
void insertbeginning(Node* &head,int data)
{
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
}
void print(Node* head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(85);
    Node* head=node1;
    print(head);
    insertbeginning(head,12);
    print(head);
    return 0;
}