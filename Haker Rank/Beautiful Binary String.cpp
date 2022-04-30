#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,cnt=0;
    string str;
    cin>>t;
    cin.ignore();
    cin>>str;
    for(i=0; i<str.size()-2; )
    {
        if(str[i]=='0'&&str[i+1]=='1'&&str[i+2]=='0')
        {
            cnt++;
            i=i+3;
        }
       else
        {
              i++;
        }
    }

    cout<<cnt<<endl;
}
/*#include <stdio.h>

int main()
{
    int num1;
    float num2;
    double num3;
    char ch;

    printf("Enter integer number: ");
    scanf("%d",&num1);
    printf("Enter  float number : ");
    scanf(" %f",&num2);
    printf("Enter double number: ");
    scanf("%lf",&num3);
    printf("Enter chararcter: ");
    ch=getchar();
    scanf("%c",&ch);
    printf(" numbers are: %d %.2f %Lf ",num1,num2,num3);

    return 0;
}*/

