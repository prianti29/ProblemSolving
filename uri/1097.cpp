/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,b,a=7;
    for(i=1;i<=9;i=i+2){
        for(b=1,j=a;b<=3;j--,b++){
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
            a=a+2;
        }
    }
}
*/
#include <stdio.h>
int main()
{
    int I,J,a=7,b;
    for(I=1;I<=9;I=I+2)
    {
        for(b=1,J=a;b<=3;J--,b++)
            printf("I=%d J=%d\n", I, J);
        a=a+2;
    }
    return 0;
}

