#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,sum,i;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x%2==1){
            sum=0;
            for(i=1;i<=y;i++){
                sum=sum+x;
                x=x+2;
            }
            cout<<sum<<endl;
        }
        else{
            x++;
            sum=0;
            for(i=1;i<=y;i++){
                sum=sum+x;
                x=x+2;
            }
            cout<<sum<<endl;
        }
    }
}
