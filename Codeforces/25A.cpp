/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a[1000],odd=0,even=0;
    cin>>t;
    for(i=0;i<=t;i++)
    {
        cin>>a[i];

        if(a[0]!==0)
        {
            for(i=0;i<a.size();i++)
            {
                if(a[0]%2==0){
                    cout<<i<<endl;
                    break;
                }
            }
        }
       // else
       // {

       // }
      //  cout<<i;
    }
   // cout<<endl;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a[1000],o=0,e=0;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    if(e>o)
    {
        for(i=0; i<t; i++)
            if(a[i]%2!=0)
            {
                cout<<i+1<<endl;
                break;
            }
    }
    else
    {
        for(i=0; i<t; i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1<<endl;
                break;

            }

        }
    }
}
