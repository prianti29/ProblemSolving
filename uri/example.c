#include<stdio.h>
int main(){
    double x,y,z;
    printf("Enter a number:\n");
    scanf("%lf",&x);
    printf("Enter another number:\n");
    scanf("%lf",&y);
    z=x+y;
    printf("Value is: %.2lf",z);
}
