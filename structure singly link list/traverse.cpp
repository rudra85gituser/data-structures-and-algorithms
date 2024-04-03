#include<iostream>
using namespace std;
struct node
{
    int info;
    node *next;
};
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
    print(start);
    return 0;
}
