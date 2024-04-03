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
    //destructor
    ~Node()
    {
        int value=this->data;
        if
        (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data"<<value<<endl;
    }
};
//function to insert a node
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
        //assuming that data is present
        Node* current=tail;
        while(current->data != element)
        {
            current=current->next;
        }
        //element founded
        Node* insertnode=new Node(d);
        insertnode->next=current->next;
        current->next=insertnode;
    }
}
// function to delete a node
void deletenode(Node* &tail,int value)
{   
    //for empty list
    if(tail==NULL)
    {
        cout<<"list is empty please check again"<<endl;
        return;
    }
    else
    {
        //for non empty list
        // assume that the value is present in  the linked list
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data!= value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        //1 node linked list
        if(curr == prev)
        {
            tail = NULL;
        }
        //2 or more than two node
        if(tail == curr)
        {
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
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
    //for enpty list 
    if(tail == NULL)
    {
        COUT<<"LIST IS EMPTY"<<endl;
        return;
    }
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

    deletenode(tail,3);
    print(tail);
    return 0;
}                                                                                                                                                         