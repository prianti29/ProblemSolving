#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

int main()
{
    ll t,t1,a,b,c,j,k,sum=0;
    cin>>t>>t1;

    vector<ll>v(t);

    for(int i=0;i<t;i++){
        cin>>v[i];
    }
     vector<ll>v1(t+1);
    for(int i=0;i<t;i++){
        v1[i]=0;
    }

    for(int i=0;i<t1;i++){
        cin>>a>>b;
        v1[a-1]+=1;
        v1[b]-=1;
    }
    for(int i=1;i<t;i++){
        v1[i]+=v1[i-1];
    }
    sort(v.begin(),v.end(),greater<int>());
    sort(v1.begin(),v1.end(),greater<int>());
    for(int i=0;i<t;i++){
        sum+=(v[i]*v1[i]);
    }
    cout<<sum<<endl;
}

/*
3 3
5 3 2
1 2
2 3
1 3
output
25*/
