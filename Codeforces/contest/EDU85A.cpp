/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m[1000],n[1000],b,t,i,j,k,sum=0;
   // string str,str,str2;
   // long long arr[],arr2[]
    cin>>t;
    while(t--)
    {
        cin>>k;
       for(i=1;i<=k;i++)
       {
           cin>>m[i]>>n[i];
       }

       //cin>>k;
      // for(i=1;i<=k;i++)
      // {
          // cout<<m<<" "<<n;
       //}
    }


}/*
/**
*   Bismillahir Rahmanir Rahim.
*   Imtiaz_rafi
*   PCIU
**/
/*#include<bits/stdc++.h>
using namespace std;
#define speed ios::sync_with_stdio(0);cin.tie(0);
#define loop(a) for(ll i=0;i<a;i++)
#define high INT_MIN
#define low INT_MAX
typedef long long int ll;
int main()
{
    speed;
    ll t,a,i,count,c,x;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>a>>x;
        ll b[a];
        for(i=0;i<a;i++)
        {
            cin>>b[i];
        }
        sort(b,b+a);
        c=0;
        for(i=a-1;i>=0;i--)
        {
            if(b[i]>=x)
            {
                count++;
                c=c+(b[i]-x);
                //cout<<c<<endl;
            }
            else
            {
                if(b[i]+c>=x)
                {
                    count++;
                    c=(b[i]+c)-x;
                    //cout<<c<<endl;
                }
            }
        }
        cout<<count<<endl;
    }
}*/
//START BY THE NAME OF ALMIGHTY ALLAH
//THIS WONT BE ACCEPTED
//STOP_GIVING_UP
*/
#include<bits/stdc++.h>
#define l(i,a,n)for(int i=a;i<n;i++)
#define PB push_back
#define IN insert
#define MP make_pair
#define LW(v) sort(v.begin(),v.end());
#define HI(v) sort(v.begin(),v.end(),greater<long long>());
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long t,r=1,r1=0,r2=0,k=0,a,b,c=1,m,d=0,n,e,f,x=0,g,p=0,q=0,y=0,z=0;
    set<long long>s;
    std::vector<int>::iterator it;
    string  s1,s2,s3,s4;
    cin>>t;
while(t--)
{c=0;
vector<pair<long long,long long>>v;
    vector<pair<long long,long long>>u;
    cin>>n;
    l(i,0,n)
    {    cin>>a>>b;
        v.PB(MP(a,b));
        u.PB(MP(a,b));
    }
    //LW(u);
    l(i,1,n)
    {
        if(((v[i].first-v[i-1].first)>=(v[i].second-v[i-1].second))&&(v[i].second>=v[i-1].second)&&(v[i].first>=v[i-1].first))
        {
            c++;
        }
    }
    if(c==n+1)
    {
        cout<<"YES"<<endl;;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
}
