/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,cnt;
    string str;

    cin>>t;

    while(t--)
    {
        cnt=0;
        cin>>str;
        for(i=0;i<str.size()-1;i++)
        {
            if(str[i]==str[i+1])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
}*/
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
    printf(" numbers are: %d %f %.2f %c ",num1,num2,num3,ch);

    return 0;
}
