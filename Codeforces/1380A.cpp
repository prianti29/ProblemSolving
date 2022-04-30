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
    ll i,j,k,a,cnt;
    ll t;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>a;
        ll arr[a];
        for(i=0; i<a; i++)
        {
            cin>>arr[i];
        }
        for(i=1; i<a-1; i++)
        {
            if(arr[i]>arr[i-1]&&arr[i]<arr[i+1])
            {
                cnt=1;
                cout<<"YES"<<endl;
                 cout<<i-1<<" "<<i<<" "<<i+1<<endl;
                 //continue;*/
                 break;
            }

        }
        if(cnt==0)
            cout<<"NO"<<endl;
       /* else
        {
            cout<<"YES"<<endl;
            cout<<i-1<<" "<<i<<" "<<i+1<<endl;
        }*/

    }
}
