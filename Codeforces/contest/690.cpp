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
    ll t,a,b,n,cnt=0,sum=0,x;

    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>v,v1;
        for(ll i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
    int i,j;
		if(n%2==0)
		{
			for(i=0,j=n-1;i<n/2;i++,j--)
			{
				v1.push_back(v[i]);
				v1.push_back(v[j]);
			}
		}
		else
		{
			for(i=0,j=n-1;i<n/2;i++,j--)
			{
				v1.push_back(v[i]);
				v1.push_back(v[j]);
			}
			v1.push_back(v[n/2]);

		}
		for(i=0;i<n;i++)
		{
			cout<<v1[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}






