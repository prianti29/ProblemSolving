#include<stdio.h>
int main()
{
   int i,N;
   scanf("%d",&N);
   for(i=0;i<=N;i++)
   {
       if(N/2==0&&N>0)
       {
           printf("EVEN POSITIVE\n");
       }
       else if(N/2==0&&N<0)
       {
           printf("EVEN NEGATIVE");
       }
       else if(N==0)
       {
           printf("NULL\n");
       }
       else if(N/2!=0&&N>0)
       {
           printf("ODD POSITIVE\n");
       }
       else
       {
           printf("ODD NEGATIVE\n");
       }


   }
   return 0;
}
