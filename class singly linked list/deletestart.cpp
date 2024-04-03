void delete(Node* &start,int position)
{
    //delete start node
    if(position==1)
    {
        Node* temp=start;
        start=start->next;
        temp->next=NULL;
        delete temp;//memory free for first node
    }
    //delete endor middle node
    else
    {
         Node* curr=start;
         Node* prev=NULL;
         for(int i=1;i<position;i++)
         {
            prev=curr;
            curr=curr->next;
         }
         prev->next=curr->next;
         curr->next=NULL;
         delete curr;//memory free for middle and end node
    }
}