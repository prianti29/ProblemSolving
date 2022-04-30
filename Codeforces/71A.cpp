#include<bits/stdc++.h>
using namespace std;
int main()
 {
     int t;
     string str;
     cin>>t;
     while(t--)
     {
         cin>>str;
         //int i=str.size();
         if(str.size()<=10)
         {
             cout<<str<<endl;
         }
         else
         {
             cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
         }
     }
 }
