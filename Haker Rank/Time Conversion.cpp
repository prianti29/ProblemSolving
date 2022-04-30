#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long h,m,s;
     string str;
     char c;
     cin>>h>>c>>m>>c>>s>>str;
     if(str=="PM")
        cout<<h+12<<":"<<m<<":"<<s<<endl;
     if(str=="AM")
     cout<<h<<":"<<m<<":"<<s;
}
