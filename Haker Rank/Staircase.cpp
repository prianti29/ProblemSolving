#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long t,i,j;
  cin>>t;
  for(i=0;i<t;i++)
  {
      for(j=0;j<t;j++){
            if(j<(t-1-i))
        cout<<" ";
      else
        cout<<"#";
      }
      cout<<endl;
  }
}
