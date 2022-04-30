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
    optimize();
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='.')
        {
            cout<<"0";
        }
        else if(str[i]=='-'&&str[i+1]=='.')
        {
            cout<<"1";
            i++;
        }
        else if(str[i]=='-'&&str[i+1]=='-')
        {
            cout<<"2";
            i++;
        }

    }
}
