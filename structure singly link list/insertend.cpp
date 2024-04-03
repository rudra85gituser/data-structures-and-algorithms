#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node * insert_at_end(node *start,int data)
{
    node *newnode=new node;
    newnode->info=data;
    node *temp=start;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
      while(temp->next=NULL)
      {
            temp=temp->next;
            temp->next=newnode;
      }
    }
    newnode->next=NULL;
    return start;
}
void print(node *start)
{
    node* temp = start;
    while(temp!=NULL)
    {
        cout<<temp->info<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node *start=NULL;
    start=insert_at_end(start,10);
    print(start);
    return 0;
}
