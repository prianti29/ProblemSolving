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
    ll i;
    string str,str1;
    cin>>str>>str1;
    for(i=0;i<str.size();i++)
    {
        if(str[i]==str1[i])
            cout<<"0";
        else
            cout<<"1";
    }
}
