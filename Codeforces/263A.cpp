#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,arr[5][5],mov=0;
    for(r=0; r<5; r++)
    {
        for(c=0; c<5; c++)
        {
            cin>>arr[r][c];
            if(arr[r][c]==1)
            {
                mov=abs(r-2)+abs(c-2);
            }
        }
    }
    cout<<mov<<endl;
}
