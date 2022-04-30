#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define PB push_back
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    long long t,a,i,b,c;

        cin>>a;
        if(a%2!=0)
            cout<<"-1"<<endl;
        else
        {
            for(i=a;i>=1;i--)
                cout<<i<<" ";
        }
        cout<<endl;

}
