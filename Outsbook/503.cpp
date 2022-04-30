#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i;
    while(cin>>a>>b)
  {
      long long sum=0;
      for(i=a;i<=b;i++)
      {
          if(i%2!=0)
            sum=sum+i;
      }
      cout<<sum<<endl;
  }
}
