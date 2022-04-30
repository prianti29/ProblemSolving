#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    while(cin>>c)
    {
        if(c>="a"&&c<="z"){
            if(c+13>"z")
                printf("%s",c-13);
            else
                printf("%s",c+13);
        }
        else if(c>="A"&&c<="z"){
            if(c+13>"Z")
                printf("%s",c-13);
            else
                printf("%s",c+13);
        }
        else
            printf("%c",c);
    }
}
