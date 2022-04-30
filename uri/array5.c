#include<stdio.h>
int main()
{
    int arr[100],size,i,max,min,range;
    scanf("%d",&size);
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    min=arr[0];
    for(i=1; i<size; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        printf("%d",max);
        }

       for(i=1; i<size; i++)
        {
            if(min>arr[i]){
                min=arr[i];
            printf("%d",min);
          }
        }
    }
          range=max-min+1;
    printf("%d",range);

}






