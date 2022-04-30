#include<stdio.h>
int main()
{
    int arr[100],size,i,larg;
    scanf("%d",&size);
    for(i=0;i<size;i++)
       scanf("%d",&arr[i]);
       larg=arr[0];
       for(i=1;i<size;i++)
       {
           if(larg<arr[i])
           larg=arr[i];
       }
       printf("%d",larg);

}
