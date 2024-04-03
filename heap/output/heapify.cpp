#include<iostream>
using namespace std;

class heap
{
    public:
    int arr[100];
    int size;

//constructor
heap()
{
    arr[0]=-1;
    size=0;
}

void insert(int value)
{
    //1-insert at last
    //2-put at correct pos acc to max heap
    //we always insert at last
    size=size+1;
    int index=size;
    arr[index]=value;

    while(index>1)
    {
        //apply rule of max heap
        //compare parent with its child
        int parent=index/2;
        if(arr[parent] < arr[index])
        {
            swap(arr[parent] , arr[index]);
            index=parent;
        }
        else
        {
            return;
        }

    }
}
void print()
{
    for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

void deletefromheap()
{
    //in deletion by default we consider the root node
    if(size == 0)
    {
        cout<<"nothing to delete"<<endl;
        return;
    }
    //1-swaping root node from last node
    arr[1]=arr[size];
    //2-removing last node
    size=size-1;
    
    //3-now apply rule rule of max heap
    //take root node to its correct position
    int i=1;
    while(i<size)
    {
        int leftindex= i*2;
        int rightindex= i*2+1;

        if(leftindex < size && arr[i] < arr[leftindex])
        {
             swap(arr[leftindex] , arr[i]);
             i=leftindex;
        }

        else if(rightindex < size && arr[i] < arr[rightindex])
        {
             swap(arr[leftindex] , arr[i]);
             i=rightindex;
        }

        else
        {
            return;
        }
    }
}
};
//heapify function
void heapify(int arr[],int size,int i)
{
        int largest=i;
        int left= i*2;
        int right= i*2+1;

        if(left > i && arr[i] < arr[left])
        {
            largest=left;
        }

        if(right > i && arr[i] < arr[right])
        {
           largest =right;
        }
        if(largest!=i)
        {
            swap(arr[largest],arr[i]);
            heapify(arr,size,largest);
        }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.deletefromheap();
    h.print();

    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    for(int i=n/2 ; i>0; i--)
    {
        heapify(arr,n,i);
    }
    cout<<"printing the heapifyed array/edited arrey"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;

    return 0;
}
