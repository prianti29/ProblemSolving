#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,c,div,dis;
    cin>>a>>b;
    if(b>a){
        div=b;
        dis=a;
    }
    else{
        div=a;
        dis=b;
    }
    while(div%dis!=0){
        c=div%dis;
        div=dis;
        dis=c;
    }
    cout<<dis;
}
