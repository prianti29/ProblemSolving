#include<stdio.h>
int main()
{
    int i;
    int j[]={'5','4','6','6','4','\0'};
    char k[]={'a','b','c','d','e','\0'};
      for(i=0;i<5;i++)
        {

             printf("%c\n",k[i]);
             printf("%c",j[i]);
        }
}
