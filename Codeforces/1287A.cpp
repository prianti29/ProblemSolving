#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,j,t,cnt;
    string str;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cnt=0;
        cin>>n>>str;
        for(i=str.size()-1; i>=0; i--)
        {
            if(str[i]!='A')
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
        str.clear();
    }
    // str.clear();
}
