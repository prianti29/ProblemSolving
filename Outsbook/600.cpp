//problem 600

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,a,n,b,k,sum,t,result;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>a;
        sum=0;
        for(i=1; i<=a; i++)
        {
            n=i;
            while(n!=0)
            {
                sum=sum+n%10;
                n=n/10;
            }
        }
        cout<<"Case "<<j<<": "<<sum<<endl;
    }
}
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
    vector<long long>v;
    vector<long long>u;
    set<long long>s;
    std::vector<int>::iterator it;
    string  s2,s3,s4;
    cin>>t;
    while(t--)
    {string s1;
    k=0;
        cin>>a;
        l(i,1,a+1)
        {
           s1=s1+to_string(i);
        }
       l(i,0,s1.size())
       {
           k=k+s1[i]-'0';
       }
       cout<<k<<endl;
    }
}*/
