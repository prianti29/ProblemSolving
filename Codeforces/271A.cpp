#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,y,i,j,a,b,c,d,mod;

    cin>>y;
    for(i=y+1; true; i++)
    {
        j=i;
        set<long long>s;
        while(j> 0)
        {
            mod = j% 10;
            ///s.insert(mod) ;
            j = j/ 10;
            s.insert(mod) ;
        }
       /// cout<<mod<<endl;
       /// cout<<s.size()<<endl;
        if(s.size()==4)
        {
            cout<<i<<endl;
            break;
        }
    }
    s.clear()
}
