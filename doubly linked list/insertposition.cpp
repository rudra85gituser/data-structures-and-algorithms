//progran to insert at position
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    //creating a constructor to store values in nodes
    //name of the constructor same as name as name of class
    //this keyword refers to the current objet in function,method,constructor
    //removes confusion between class attributes and parameters with same name
    Node (int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};
//inserting at head
void inserthead(Node* &tail,Node* &head,int d)
{
    //if there is empty list no list
    if(head==NULL)
    {
         Node* temp = new Node(d);
         head=temp;
         tail=temp;
    }
    Node* temp = new Node(d);
    temp->next=head;
  
    head->prev=temp;
    head=temp;
}
//incerting at tail
void inserttail(Node* &tail,Node* &head,int d)
{
    //if there is empty list no list
    if(head==NULL)
    {
         Node* temp = new Node(d);
         head=temp;
         tail=temp;
    }
    Node* temp=new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
//insert at middle
void insertmiddle(Node* &tail,Node* &head,int position,int d)
{
   
    if(position==1)
    {
        inserthead(tail,head,d);
        return;
    }
    else
    {
       Node* temp=head;
       for(int i=1;i<position-1;i++)
       {
         temp=temp->next;
       }
       if(temp->next==NULL)
       {
           inserttail(tail,head,d);
           return;
       }
        Node* insert = new Node(d);

        insert->next=temp->next;
        temp->next->prev=insert;
        temp->next=insert;
        insert->prev=temp;
    }
    
}
//travercing linked list
void print(Node* &head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//finding length of linked list
int length(Node* head)
{
    Node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
int main()
{
    Node* node1 = new Node(85);
    Node* head=node1;
    Node* tail=node1;

    print(head);

    inserthead(tail,head,45);
    print(head);

    inserthead(tail,head,55);
    print(head);

    inserttail(tail,head,76);
    print(head);

    insertmiddle(tail,head,4,23);
    print(head);

    insertmiddle(tail,head,3,23);
    print(head);

    cout<<length(head)<<endl;
    return 0;
} 