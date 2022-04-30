#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll t,sum=0;
    string str;
    cin>>t;
    while(t--){
            cin>>str;
        if(str=="Tetrahedron"){
             sum+=4;
        }
        else if(str=="Cube"){
            sum+=6;
        }
        else if(str=="Octahedron"){
            sum+=8;
        }
        else if(str=="Dodecahedron"){
            sum+=12;
        }
        else if(str=="Icosahedron"){
            sum+=20;
        }
    }
    cout<<sum<<endl;
}
