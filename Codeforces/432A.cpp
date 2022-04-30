#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l=0;
    cin>>i>>j;
    while(i--)
    {
        cin>>k;
        //if(k+1>=j)
        if(5-k>=j)
          l++;
    }
    //l++;
    l=l/3;
    cout<<l<<endl;


}
