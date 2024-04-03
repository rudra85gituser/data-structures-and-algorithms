// to insert element at last location,middle  element,
//if list is empty creating a node and inserting data
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
void insertnode(Node* &tail,int element,int d)
{
    //assuming that element is present in the list
    //if list is empty
    if(tail==NULL)
    {
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else
    {
        //non empty list
        //data is present
        Node* current=tail;
        while(current->data != element)
        {
            current=current->next;
        }
        //element founded
        Node* temp=new Node(d);
        temp->next=current->next;
        current->next=temp;
    }
}
 
void print(Node* tail)
{
    /*this will not work when there is only one node pointing to itself*/
      /* while(tail->next!=temp)
     {
        cout<<tail->data<<endl;
        tail=tail->next;
     } */
    Node* temp=tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    }
     while(tail!=temp);
    cout<<endl;
}
int main()
{
    //to check for empty linked list
    Node* tail=NULL;

    insertnode(tail,3,4);
    print(tail);

    //for non empty list
    insertnode(tail,4,3);
    print(tail);

    insertnode(tail,3,9);
    print(tail);

    return 0;
}