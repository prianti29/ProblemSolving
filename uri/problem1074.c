#include<stdio.h>
int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        if(N%2==0)
        {
            if(N>0)
            {
                printf("%d Even positive\n",N);
            }
            else
            {
                printf("%d Even NEGATIVE\n",N);
            }


        }
        if(N==0)
        {
             printf("%d EVEN NULL",N);
        }
         if((N%2)!=0)
        {
            if(N>0)
            {
             printf("%d ODD POSITIVE");
            }


        else (N<0)
        {
            printf("%d ODD NEGATIVE");
        }
    }
    }
    return 0;
}

