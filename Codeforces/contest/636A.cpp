/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,n,m,a,z,t,b,c,i,j,d,sum=0,cnt=0;
    vector<long long >v;
    vector<long long >v1;
    cin>>t;
    while(t--)
    {
        {
            m=0;
            q=0;
            cin>>n;
            m=n/2;
            if(m%2==0)
            {
                cout<<"YES"<<endl;
                a=0;
                b=1;
                for(int i=0; i<m; i++)
                {
                    a=a+2;
                    cout<<a<<" ";
                    q=q+a;
                }
                cout<<b<<" ";
                z=b;
                for(int i=1; i<m-1; i++)
                {
                    b=b+2;
                    cout<<b<<" ";
                    z=z+b;
                }
                cout<<q-z<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x,y,z,q=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%3==0)
        {
            cout<<n/3<<endl;
        }
        else
        {
            cout<<n%3<<endl;
        }
    }
}
