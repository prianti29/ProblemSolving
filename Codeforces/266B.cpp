#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n,t,i;
    string str;
    cin>>n>>t>>str;
    while(t--)
    {
        for(int j=0; j<n; j++)
        {
            if(str[j]=='B'&&str[j+1]=='G')
            {
                str[j]='G';
                str[j+1]='B';
                j++;
            }
        }
    }
    cout<<str<<endl;
}
