
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
    ll t,a,sum,m=1,n=1;
    string str;
    cin>>t;

    /* while(t--){
         cin>>str; n=str.size();
         sum=10*(str[0]-'0'-1);
         if(n==1){
             sum+=1;
         }
          else if(n==2)
             {
                 sum+=3;
             }
             else if(n==3)
             {
                 sum+=6;
             }
             else
             {
                 sum+=10;
             }
         cout<<sum<<endl;

     }*/
     while(t--){
        cin>>a;
    ll arr[a];
    for(ll i=0; i<a; i++)
    {

        cin>>arr[i];
    }

ll cnt=0;

        for(ll i=0; i<a-1; i++)
        {
            if(arr[i]=='1'&&arr[i+1]=='0'&&arr[i+2]=='1')
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;

     }

}
