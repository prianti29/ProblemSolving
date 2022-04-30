#include<stdio.h>
int main()
{
   int salary,year,Bonus;
   scanf("%d %d",&salary,&year);
   if(year>5)
    {
        Bonus=((5*salary)/100);
        printf("bonus salary %d",Bonus);
    }
}
