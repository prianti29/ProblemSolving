#include <stdio.h>

int main()
{
    int num1;
    float num2;
    double num3;
    char ch;

    printf("Enter integer number: \n");
    scanf("%d",&num1);
    printf("Enter  float number : \n");
    scanf(" %f",&num2);
    printf("Enter double number: \n");
    scanf("%lf",&num3);
    printf("Enter chararcter: \n");
    ch=getchar();
     scanf("%c",&ch);
    printf("numbers are: %d %f %.2f %c",num1,num2,num3,ch);

    return 0;
}
