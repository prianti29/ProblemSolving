#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   int i;
   cin>>str;
   for(i=0;i<str.size();i++)
   {
       if(str[i]>=65&&str[i]<=90)
       str[i]=str[i]+32;
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
        continue;
       else
        cout<<"."<<str[i];
   }
}
