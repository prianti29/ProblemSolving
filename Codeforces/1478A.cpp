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
    long long int cnt,t,y,m,n,a,b,i,j,x,z,sum,k;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        sum=0,cnt=1;
        string str,str1;
        cin>>n;
        vector<ll> arr(n+1);
        fill(arr.begin(), arr.end(), 0);
        for(i=0; i<n; i++)
        {
            int in;
            cin>>in;
            arr[in]++;
        }
        cout<<*max_element(arr.begin(), arr.end())<<endl;
    }
    return 0;
}
