#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,cnt=0;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(str=="X++"||str=="++X")
        {
            cnt++;
        }
        if(str=="X--"||str=="--X")
        {
            cnt--;
        }
    }

}
