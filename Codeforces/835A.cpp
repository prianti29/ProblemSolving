/*#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll s,a,b,t1,t2;
    cin>>s>>a>>b>>t1>>t2;
    ll m=(s*a)+(2*t1);
    ll n=(s*b)+(2*t2);
    if(m<n){
        cout<<"First"<<endl;
    }
    else if(m>n){
        cout<<"Second"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }
}*/
#include<bits/stdc++.h>
#include<iomanip>
#define f(i,a,n)for(i=a;i<n;i++)
using namespace std;
int main()
{
    long long i,j,c=0,d=0,a,b,e,x,y,z,p,m;
    string s,t;
    cin>>a;
    long long ar[a];
    f(i,0,a)
    {
        cin>>ar[i];
    }
     long long max=ar[0],min=ar[0];
    f(i,1,a)
    {
        p=ar[i],m=ar[i];
        for(j=0; j<i; j++)
        {
            if(p==ar[j]||m==ar[j])
            {
                x=ar[j];
            }
            p=min(p,ar[j]);
            m=max(m,ar[j]);

        }
        if(p==x||m==x)
            d++;
        if(p==ar[i])
            c++;
       else if(m==ar[i])
            c++;
    }

    cout<<c-d<<endl;

    return 0;
}
