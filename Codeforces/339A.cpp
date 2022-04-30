#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    string str;
    vector<int>v;
    cin>>str;
    for(i=0;i<str.size();i=i+2)
    {
        j=str[i]-'0';
        v.push_back(j);
    }
   sort(v.begin(),v.end());
   for(i=0;i<v.size()-1;i++)
   {
     cout<<v[i]<<"+";
   }
   cout<<v[i];

  // for(i=0;i<v.size()-1;i++)
  // {
   //  cout<<"+";
   //}

}
