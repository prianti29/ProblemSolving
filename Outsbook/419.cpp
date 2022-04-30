#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long a;
   while(cin>>a)
   {
       if(a%2==0)
        cout<<a/2<<" "<<(a/2)+1<<endl;
       else
        cout<<(a/2)+1<<endl;
   }
}
