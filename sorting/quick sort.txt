#include<iostream>
using namespace std;

int Partition(int a[],int start,int end)
{
    int pivot = a[end];
    int PartitionIndex = start;
    for(int i = start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            swap(a[i],a[PartitionIndex++]);
        }
    }
    swap(a[PartitionIndex],a[end]);
    return PartitionIndex;
}

void quicksort(int a[],int start,int end)
{
    if(start>=end)
        return;
    int PartitionIndex = Partition(a,start,end);

    quicksort(a,start,PartitionIndex-1);
    quicksort(a,PartitionIndex+1,end);
}

int main()
{
    int i;
    int a[]={7,6,5,4,3,2,1,0};
    quicksort(a,0,7);
    for(i=0;i<8;i++)
        cout<<a[i]<<" ";
}
