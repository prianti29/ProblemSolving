#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define speed() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
   speed();
   ll t,i,a,j,b;
   cin>>t;
   while(t--)
   {
       ll n,sum;
       cin>>n;
       ll arr[n];

       for(i=0;i<n;i++)
       {
          //sum=0;
           cin>>arr[i];

       }
       sum=0;
      for(j=0;j<n;j++){
          if(arr[j]<=j+1)
            sum+=j+1;
      }
       cout<<sum<<endl;

       /*cin>>a>>b;
       cout<<setprecision(0)<<fixed<<ceil((a*b)/2.0)<<endl;*/
   }
}
