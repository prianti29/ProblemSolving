#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
      cin>>n>>m;
         if(n>m){
            cout<<">"<<endl;
         }
         else if(n<m){
            cout<<"<"<<endl;
         }
         else{
            cout<<"="<<endl;
         }

    }
}
