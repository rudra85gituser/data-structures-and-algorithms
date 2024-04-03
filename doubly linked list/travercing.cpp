//progran to traverse and to find length of a lonked list
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
//travercing linked list
void print(Node* head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
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
    print(head);
    cout<<length(head)<<endl;
     return 0;
}