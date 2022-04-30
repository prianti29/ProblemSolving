#include<stdio.h>
int main()
{
    int arr[100],size,i,mini;
    scanf("%d",&size);
    for(i=0;i<size;i++)
       scanf("%d",&arr[i]);
       mini=arr[0];
       for(i=1;i<size;i++)
       {
           if(mini>arr[i])
           mini=arr[i];
       }
       printf("%d",mini);

}

