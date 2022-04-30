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
    ll pos=-1;
    string str;
    cin>>str;
    ll sz=str.size();
    for(int i=0; i<sz; i++)
    {
        if((str[i]-'0')%2==0)
        {
            //i=pos;
            pos=i;
            if(str[sz-1]>str[i])
            {
                swap(str[i],str[sz-1]);
                cout<<str;
                return 0;

            }
        }
    }
    if(pos==-1)
    {
        cout<<-1<<endl;
        return 0;
        //break;
    }
    else
    {
        swap(str[pos],str[sz-1]);
        cout<<str;
        return 0;
        //break;
    }

}


