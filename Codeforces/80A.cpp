#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,m,n,cnt=0;
    long long arr[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    cin>>m>>n;
    for(i=0;i<15;i++){
        if(arr[i]==m&&arr[i+1]==n){
            cnt=1;
            break;
        }
    }
    if(cnt==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
