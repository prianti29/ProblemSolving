#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,t,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if((b-a)>=2)
        {
            cnt++;
        }
    }
      cout<<cnt<<endl;

}
