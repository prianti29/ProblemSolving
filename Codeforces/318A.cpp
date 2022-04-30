#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j;
    cin>>i>>j;
    /* if(i%2==0)
     {
         if(j>i/2)
         {
             cout<<2*(j-i/2)<<endl;
         }
         else
         {
             cout<<2*j-1<<endl;
         }
     }
     else
     {
         //if(i%2!=0)
         if(j>i/2+1)
         {
             cout<<2*(j-(i/2+1))<<endl;
         }
         else
         {
             cout<<2*j-1<<endl;
         }
     }*/
    if(j<=(i+1)/2)
    {
        cout<<j*2 - 1<<endl;
    }
    else
    {
        cout<<(j-(i+1)/2)*2<<endl;
    }

}
