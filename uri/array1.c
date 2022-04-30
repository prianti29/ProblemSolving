#include<stdio.h>
int main()
{
    int i,n;
    int j[5];
    char k[]={'a','b','c','d','e','\0'};
      for(i=0;i<5;i++)
        {
             printf("%c",k[i]);
        }


     for(i=0;i<5;i++)
       {
           scanf("%d",&j[i]);
         printf("%d",j[i]);
       }
}

