#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll i,j,a,b;
    cin>>a>>b;
    if(b==10)
    {
        if(a==1)
        {
            cout<<-1<<endl;
        }

        else
        {
            for(i=0; i<a-1; i++)
            {
                cout<<1;
            }
            cout<<0;
            //cout<<b<<endl;
        }
        //return 0;
    }
    /*if(a==1&& b==1,2,3,4,5,6,7,8,9)
    {
        cout<<b<<endl;
    }*/
    //  if(b>10)
    else
    {
        for(i=0; i<a; i++)
        {
            cout<<b;
        }

    }
}
