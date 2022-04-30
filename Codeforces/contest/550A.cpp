#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll i,j,k,ans=0,t,cnt;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        sort(str.begin(),str.end());
        cnt=0;
        for(i=0; i<str.size()-1; i++)
        {

            char c=str[i]+1;
            if(str[i+1]!=c)
            {
                cout<<"NO"<<endl;
                cnt=1;
                break;
            }
            /* else{
                 cout<<"YES"<<endl;
                 break;
             }*/
            //str.clear();

        }
         if(cnt==0){
             cout<<"YES"<<endl;
         }

    }

}
