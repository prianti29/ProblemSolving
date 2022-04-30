#include<stdio.h>
int mani()
{
    int x,y;
    scanf("%d%d",&x,&y);
    switch(x)
    {
    case 1:
        printf("TOTAL: R$ %.2lf\n",y*4.00);
        break;
         case 2:
        printf("TOTAL: R$ %.2lf\n",y*4.50);
        break;
         case 3:
        printf("TOTAL: R$ %.2lf\n",y*5.00);
        break;
         case 4:
        printf("TOTAL: R$ %.2lf\n",y*2.00);
        break;
         case 5:
        printf("TOTAL: R$ %.2lf\n",y*1.50);
        break;
    }
    return 0;
}
