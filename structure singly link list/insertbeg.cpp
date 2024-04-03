#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node * insert_at_start(node *start,int data)
{
    node *newnode=new node;
    newnode->info=data;
    newnode->next=start;
    start=newnode;
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
    start=insert_at_start(start,10);
    print(start);
    return 0;
}
