#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,b,sum=0;
    cin>>n>>a>>b;
    for(i=1;i<=n;i++){
        string str=to_string(i);
        int s=0;
        for(int j=0;j<str.size();j++){
            int k=str[j]-'0';
            s=s+k;
        }
        if(s>=a&&s<=b){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
}
