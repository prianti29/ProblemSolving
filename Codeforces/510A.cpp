#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j,k=0;
    cin>>r>>c;
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            if(i%2!=0)
                cout<<"#";
            else if(i%2==0&&j!=c&&j!=1)
                cout<<".";
            else if((k/2)%2==0&&j==c)
                cout<<"#";
            else if((k/2)%2!=0&&j==1)
                cout<<"#";
            else
                cout<<".";
        }
        cout<<endl;
        k++;
    }


}
