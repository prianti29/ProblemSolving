#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,i,total=0;
    cin>>x>>y;
    if(x>y){
        for(i=x-1;i>y;i--)
        {
            if(i%2!=0)
            {
                total=total+i;
            }
        }
    }
    else{
        for(i=y-1;i>x;i--){
            if(i%2!=0){
                total=total+i;
            }
        }
    }
    cout<<total<<endl;
}
