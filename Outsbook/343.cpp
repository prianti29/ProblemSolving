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
    double a,b,c,d,i,j,k;
    while(cin>>a>>b>>c>>d){
        i=pow((a-b),2);
        j=pow((c-d),2);
        k=sqrt(i+j);
        cout<<setprecision(2)<<fixed<<k<<endl;
    }
}
