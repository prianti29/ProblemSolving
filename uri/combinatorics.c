#include<stdio.h>
int main()
{
    int n,l,r;
    scanf("%d %d",&n,&l);
    r=fact(n)/(fact(r)*fact(n-r));
      printf("The NCR of %d and %d is %d",n,l,r);
}
int fact(x)
{
    int i=1;
    while(x!=0)
    {
        i=i*x;
        x--;
    }
    return i;
}
