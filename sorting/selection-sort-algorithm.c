#include<stdio.h>
#include<math.h>

int main()
{

//t=size;

    int i,t,arr[10];
    scanf("%d",&t);
    for(i=0; i<t; i++)
        scanf("%d",&arr[i]);

        int j,smallindex,temp;

           for(i=0;i<t-1;i++)
           {
               smallindex=i;
               for(j=i+1;j<t;j++)
               {
                   if(arr[j]<arr[smallindex])
                    smallindex=j;
               }
               temp=arr[i];
               arr[i]=arr[smallindex];
               arr[smallindex]=temp;

           }


           for(i=0;i<t;i++)
          printf("%d ",arr[i]);


    return 0;
}
