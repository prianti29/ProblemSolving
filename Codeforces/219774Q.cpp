#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,k,a,n,n1;
    //vector<long long>v;

    cin>>t;

    while(t--)
    {
        vector<long long>v;
        //long long cnt=0;

        cin>>n1;

        for(k=0; k<n1; k++)
        {
            cin>>n;
            v.push_back(n);
        }
        long long cnt=0;

        for(i=0; i<n1; i++)
        {
            for(j=i+1; j<n1; j++)
            {
                if(v[j]>v[j-1])
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        cout<<cnt+n1<<endl;
    }

}

