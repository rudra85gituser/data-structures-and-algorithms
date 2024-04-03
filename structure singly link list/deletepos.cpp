#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
node * delete_pos(node *start,int place)
{
    node* temp=start;
    node *prev;
    if(start==NULL)
    {
        cout<<"node is already empty"<<endl;
        return start;
    }
     if(start->next==NULL)
    {
        start==NULL;
        delete temp;
        return start;
    }
     else
    {
         node* prev=NULL;
         for(int i=1;i<place;i++)
         {
            prev=temp;
            temp=temp->next;
         }
         if(temp==NULL)
         {
            cout<<"position is greater than list"<<endl;
            return start;
         }
         prev->next=temp->next;
         delete temp;
         return start;//memory free for middle and end node
    }

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
    start=delete_pos(start,2);
    print(start);
    return 0;
}