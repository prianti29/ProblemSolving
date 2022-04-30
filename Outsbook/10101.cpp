#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long t,a,fact,i,counter=1;
    cin>>t;
    while(t--)
    {
        i=2;
        cin>>a;
        while(a>1)
        {
            a=a/i;
            i++;
        }
        cout<<"Case "<<counter<<": "<<i-1<<endl;
        counter++;
    }

}
/* cin>>t;
   l(i,1,t+1)

   {cin>>n;
   x=2;
   while(n>1)
   {
       n=n/x;
       x++;

   }
   cout<<"Case "<<i<<": "<<x-1<<endl;
}*/
