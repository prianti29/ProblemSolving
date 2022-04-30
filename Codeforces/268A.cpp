
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,k,i[1000],j[1000],cnt=0;
    cin>>t;
    for(k=0;k<t;k++)
        cin>>i[k]>>j[k];
    for(k=0;k<t;k++)
    {
        for(m=0;m<t;m++)
        {
            if((i!=j)&&i[k]==j[m])
                cnt++;
        }
    }
    cout<<cnt;
        //cin>>j[k];

    //for(k=0;k<t;k++)
      //  cout<<i[k]<<endl;

    //for(k=0;k<t;k++)
        //cout<<j[k]<<endl;


}
