#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef double dl;
typedef unsigned long long int ull;

 int main()
 {
     meow;
     ll i,n,j,t;
     vector<ll>v;
     for(i=0;i<3;i++){
        cin>>n;
        v.push_back(n);
     }
     sort(all(v));
     cout<<abs(v[0]-v[1])+abs(v[1]-v[2]);
 }
