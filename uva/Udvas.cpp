#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a,i,b,c,j,l,r;
    cin>>a;
    for(i=0;i<a;i++)
    {int x=0;

        l=0,r=0;;
        cin>>b;
        int v[b];
        string s,s1;
        for(j=0;j<b;j++)
        {
            cin>>s;

            if(s=="LEFT")
            {
                v[j]=-1;


            }
            else if(s=="RIGHT")
            {
                v[j]=1;

            }
            else
            {
                scanf("%*s%d",&c);
                v[j]=v[c-1];
            }
        }
        for(j=0;j<b;j++)
        {
        x=x+v[j];
        }
        cout<<x<<endl;
    }
}
