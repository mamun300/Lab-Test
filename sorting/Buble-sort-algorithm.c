#include<stdio.h>
#include<math.h>

int main()
{
    int i,t,arr[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
        scanf("%d",&arr[i]);

   int j,temp;

   for(i=0;i<t;i++)
   {
       for(j=i;j<t-1;j++)
       {
           if(arr[j]<arr[i])
           {
               temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;

           }
       }

   }



  for(i=0;i<t;i++)
    printf("%d ",arr[i]);


    return 0;
}
