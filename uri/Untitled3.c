#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (b>c&&d>a&&((c+d)>(a+b))&&(c&&d)>=0&&a%2==0)
    {
        printf("valores aceitos\n");
    }
    else
        printf("valores nao aceitos\n");
    return 0;
}
