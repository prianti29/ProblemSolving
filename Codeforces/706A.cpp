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
    double a,b,c,x,y,ans,z;
    double mn=(double)INT_MAX;
    cin>>a>>b>>c;
    while(c--)
    {
        cin>>x>>y>>z;

        ans=sqrt(((x-a)*(x-a))+((y-b)*(y-b)))/z;
       mn=min(ans,mn);
        /*if(ans<mn){
            mn=ans;
        }*/
    }

    cout<<fixed<<setprecision(15)<<mn<<endl;

}
