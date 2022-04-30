#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,b1;
    while(cin>>n) {
        if(n%2!=0)
    {
    b=(n+1)/2;
        cout<<b<<endl;
}
else
    //if(n%2==0)
    {
    b=(n/2);
    b1=(n/2)+1;
        cout<<b<<" "<<b1<<endl;
    }

    }
   return 0;


}
