#include<stdio.h>
#include<math.h>

int main()
{

int arr[10];

int i,t;
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",&arr[i]);

int j,temp;

for(i=0;i<t-1;i++)
{
for(j=i+1;j>=0;j--)
{
    if(j<=0)
        break;
    if(arr[j]<arr[j-1])
    {
        temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
    }

}
}

for(i=0;i<t;i++)
printf("%d ",arr[i]);




    return 0;
}
