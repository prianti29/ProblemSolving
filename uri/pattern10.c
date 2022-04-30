#include<stdio.h>
int main()
{
    int i,j,n,k,space=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k>=space;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=n-1;i<=n;i++)
    {
        for(k=1;k<=space;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
           printf("%d",j);
        }
        printf("\n");
    }
}
