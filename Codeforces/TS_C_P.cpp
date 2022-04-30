#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n, first = 0, second = 1, next, c;
   int i,j;
       cin>>n;
       for ( c = 0 ; c < n ; c++ )
       {
          if (c <= 1) next = c;
          else
          {
             next = first + second;
             first = second;
             second = next;
          }
       }
          cout<<next<<endl;
}
