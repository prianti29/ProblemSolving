#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,temp=0,sum=0,i;
   while(cin>>a>>b){
    if(a<=0||b<=0){
        break;
    }
    sum=0;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a;i<=b;i++){
        sum=sum+i;
        cout<<i<<" ";
    }
    cout<<"sum "<<"="<<sum<<endl;
   }
}
