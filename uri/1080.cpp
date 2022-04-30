#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,pos=0,mini=0;
    for(i=0;i<100;i++){
        cin>>n;
        if(n>mini){
            mini=n;
            pos=i;
        }
    }
     cout<<mini<<endl<<pos+1<<endl;
}
