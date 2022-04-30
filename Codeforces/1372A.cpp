/*#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;

int main()
{
    ll t,n,i;
    cin>>t;
    while(t--){
            cin>>n;
        for(i=0;i<n;i++){
            cout<<"13 ";
        }
        cout<<endl;
    }
}*/
#include<stdio.h>
int main()
{
    int i,j,r;
    scanf("%d",&r);
    for(i=1;i<=r;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=(r*2-(2*i-1));j++){
            printf("*");
        }
        printf("\n");
    }
}
