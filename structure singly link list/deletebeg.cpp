#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node * delete_start(node *start)
{
    node* temp=start;
    if(start==NULL)
    {
        cout<<"node is already empty"<<endl;
        return start;
    }
    start=temp->next;
    delete temp;
    return start;
}
node * insert_at_pos(node *start,int data,int place)
{
    node *newnode=new node;
    newnode->info=data;
    node *temp=start;
    if(place<1)
    {
        cout<<"invalid place"<<endl;
        return start;
    }
    if(place==1)
    {
        newnode->next=start;
        start=newnode;
        return start;
    }
    else
    {
        for(int i=1;i<place;i++)
        {
            temp=temp->next;

        }
        if(temp==NULL)
        {
            cout<<"incertion position is greater than the node length"<<endl;
            return start;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        return start;

    }
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
    start=insert_at_pos(start,10,1);
    print(start);
    start=insert_at_pos(start,20,3);
    print(start);
    start=delete_start(start);
    print(start);
    return 0;
}