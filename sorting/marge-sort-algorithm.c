#include<stdio.h>
#include<math.h>


int totalmarge(int arr[],int left,int mid,int right)
{

int left_size,right_size,i;

left_size=mid-left+1;
right_size=right-mid;

int L[left_size],R[right_size];


for(i=0;i<left_size;i++)
L[i]=arr[left+i];

for(i=0;i<right_size;i++)
    R[i]=arr[mid+1+i];

    int j,k;
    i=0;
    j=0;
    k=left;


    while(i<left_size && j<right_size)
    {

        if(L[i]<R[j])
            arr[k++]=L[i++];
        else
            arr[k++]=R[j++];
    }
    while(i<left_size)
        arr[k++]=L[i++];
    while(j<right_size)
       arr[k++]=R[j++];

}




int printarray(int arr[],int t)
{
    int i;
    for(i=0;i<t;i++)
    printf("%d ",arr[i]);

}

int margesort(int arr[],int left, int right)
{
    if(left>=right)
        return ;
    else
    {
        int mid;
        mid = left+(right-left)/2;
        margesort(arr,left,mid);
        margesort(arr,mid+1,right);

        totalmarge(arr,left,mid,right);
    }
}



int main()
{
int i,t,arr[10];
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",&arr[i]);


printarray(arr,t);
margesort(arr,0,t-1);

printf("Afer sort :\n");
printarray(arr,t);

    return 0;
}
