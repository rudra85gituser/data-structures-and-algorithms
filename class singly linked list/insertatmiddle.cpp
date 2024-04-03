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
//to insert at beginning
void insertstart(Node* &start,int d)
{
    Node* temp = new Node(d);
    temp->next=start;
    start=temp;
}
//to insert at end
void insertend(Node* &end,int d)
{
    Node* temp = new Node(d);
    end->next=temp;
    end=end->next;
}
//to insert at middle and end
void insertmiddle(Node* &end,Node* &start,int position,int d)
{
   
    if(position==1)
    {
        insertstart(start,d);
        return;
    }
    else
    {
       Node* temp=start;
       for(int i=1;i<position;i++)
       {
         temp=temp->next;
       }
       if(temp->next==NULL)
       {
           insertend(end,d);
           return;
       }
        Node* insert=new Node(d);
        insert->next=temp->next;
        temp->next=insert;
    }
    
}
void print(Node* &start)
{
    Node* temp=start;
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
    insertstart(start,43);
    print(start);
    insertend(end,12);
    print(start);
    insertmiddle(end,start,2,46);
    print(start);

    return 0;
}