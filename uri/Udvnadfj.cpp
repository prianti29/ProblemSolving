#include <stdio.h>
#include<string.h>
int main()
{
    string str;
    int alpha,len, i;

   // alphabets=1;

   len=str.size();

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            alpha++;
        }

        i++;
    }

    printf("%d\n", alpha);

    return 0;
}
