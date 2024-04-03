#include<iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
    //finding a pivot element and counting all elements less than pivot elements
    int pivot=arr[start];
    int count=0;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<pivot)
        {
            count ++;
        }
    }
    //placing the pivot elements at its right place
    int pivot_index=start+count;
    swap(arr[pivot_index],arr[end]);
    int i=start;
    int j=end;
    while(i<pivot_index && j>pivot_index)
    {
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        } 
        if(i<pivot_index && j>pivot_index)
        {
        swap(arr[i++],arr[j--]);
        }
    }
    return pivot_index;
 }
 void quicksort(int arr[],int start,int end)
{
    //base case to check arrey is not null
    if(end>=start)
    {
        return;
    }
    //partition element
    int p=partition(arr,start,end);
    //left part sort
    quicksort(arr,start,p-1);
    //right part sort
    quicksort(arr,start+1,end);
}

int main()
{
    int i,n,arr[n];
    cout<<"ENTER THE LIMIT ODF ARREY"<<endl;
    cin>>n;
    cout<<"enter the arrey elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
     for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}


