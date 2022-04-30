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
    string str;
    ll i,cnt=0;
    cin>>str;
    for(i=0;i<str.size();i++){
        if(str[i]=='4'||str[i]=='7'){
            cnt++;
        }
    }
    if(cnt==4||cnt==7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
