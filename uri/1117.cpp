#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y=0,z=0;
    while(1)
    {
        cin>>x;
        if(x<0||x>10)
        {
            cout<<"nota invalida"<<endl;
        }
        else if(z==0)
        {
            y=x;
            z=1;
        }
        else
        {
            printf("media = %.2f\n",(x+y)/2);
            break;
        }
    }

}
