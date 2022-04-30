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

    ll i, t,a,b,n;
    cin>>t;
    while(t--)
    {
        ll cnt=1;
       /* cin>>n;
        a=n/2020;
        b=n%2020;
        if(a>=b)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }*/
       /* ll arr[100];
        cin>>n;
         arr[n];
        for( i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(arr[i]==arr[i+1]){
            cnt++;
        }

        cout<<cnt<<endl;
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int cnt,t,y,m,n,a,b,i,j,x,z,sum,k;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        sum=0,cnt=1;
        string str,str1;
        cin>>n;
        vector<long long int> ara(n+1);
        fill(ara.begin(), ara.end(), 0);
        for(i=0;i<n;i++)
        {
            int in;
            cin>>in;
            ara[in]++;
        }
        cout<<*max_element(ara.begin(), ara.end())<<endl;
    }
    return 0;
}
