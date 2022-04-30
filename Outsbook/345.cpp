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
    long long a,i,b;
    while(cin>>a>>b)
    {
        i=a+(a+1)+(a+2);
        cout<<i<<endl;
        if(i<b)
           cout<<"A is too smaller than B"<<endl;
           else
            cout<<"A is too larger than B"<<endl;

    }
}
