#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll t,i,j,cnt=0,sum=0,sum1;
    cin>>t;
    ll arr[13];
    for(i=0; i<12; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+12, greater<int>());
    for(i=0; i<12; i++)
    {
        sum+=arr[i];
        if(t==0){
            cout<<0<<endl;
            return 0;
        }
        else if(sum>=t){
              cout<<cnt+1<<endl;
             // break;
             return 0;
        }
        else{
            cnt++;
        }
    }
    cout<<"-1"<<endl;






}
