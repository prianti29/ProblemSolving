#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll i,j,m,n,cnt=0;
    cin>>m>>n;
    char arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];

        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]=='G'||arr[i][j]=='B'||arr[i][j]=='W'){
                continue;
            }
            else{
                cnt=1;
                break;
            }
        }
    }
    if(cnt==1){
        cout<<"#Color";
    }
    else{
        cout<<"#Black&White";
    }
}
