#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,n,i,j,cnt=0;
    cin>>n;
    while(n/2!=0){
        if(n%2==1){
            cnt++;
           // n=n/2;
        }
        n=n/2;
    }
    cout<<cnt+1;
}
