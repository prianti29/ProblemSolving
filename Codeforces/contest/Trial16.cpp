#include<bits/stdc++.h>
using namespace std;
//A

int main()
{
    /*long long a,b,ans,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
    cout<<a+b<<endl;
    }*/




    //B
    long long a,b,c,d,ans,t,ans2;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c>>d;

        //ans=a*b;
        //ans2=(c*d)*2;
        //cout<<ans2;
        if(a>b)

        {
             swap(a,b);
            //cout<<"Yes"<<endl;
        }
        else
        {
            swap(c,d);
           // cout<<"No"<<endl;
        }
        if(a+c==b&&a+c==d)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

