#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
   while(cin>>i>>j)
   {
       if(i<j)
        k=i;
       else
        k=j;
      if(k%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;
   }

}
