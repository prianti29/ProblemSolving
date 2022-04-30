/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,diff,i;
    long long arr[n];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for( i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++)
            if(abs(arr[i]-arr[j])<diff)
            diff = abs(arr[i]-arr[j]);
    }
    sort(arr,arr+n);
    cout<<arr[i]<<" ";
}*/
/*
START BY THE NAME OF ALMIGHTY ALLAH
THIS WONT BE ACCEPTED
STOP_GIVING_UP
*/
/*#include<bits/stdc++.h>
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
    vector<long long>u;
    set<long long>s;
    std::vector<int>::iterator it;
    string  s1,s2,s3,s4;
    cin>>n;
    while(n--)
    {
        multimap<long long,long long>gk;
        vector<long long>v;
        cin>>m;
        l(i,0,m)
        {
            cin>>a;
            v.PB(a);
        }
        LW(v);
        l(i,0,m)
        {
            gk.IN(pair<long long,long long>((v[i]-v[i+1]),v[i]));
        }
        // sort(gk.begin(),gk.end(),gk.first);
        for(auto x:gk)
        {
            cout<<x.second<<" ";
        }
        cout<<endl;
    }
}*/
#include<bits/stdc++.h>
#define l(i,a,n)for(int i=a;i<n;i++)
#define PB push_back
#define gk sorted_multimap
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
    vector<long long>u;
    set<long long>s;
    std::vector<int>::iterator it;
    string  s1,s2,s3,s4;
    cin>>n;
    while(n--)
    {
        multimap<long long,long long>gk;
        vector<long long>v;
        cin>>m;
        l(i,0,m)
        {
            cin>>a;
            v.PB(a);
        }
    LW(v);
        l(i,0,m)
        {
            gk.IN(pair<long long,long long>(abs(v[i]-v[i+1]),v[i]));
        }
        /*std::multimap<long long ,long long>::reverse_iterator rit;
  for (rit=gk.rbegin(); rit!=gk.rend(); ++rit)
   {
    std::cout << rit->second <<" ";}
*/
        for(auto x:gk)
        {
            cout<<x.second<<" ";
        }
        cout<<endl;
    }
}
