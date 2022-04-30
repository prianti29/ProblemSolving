#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0,i,c=0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    while(j!=1)
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]%2!=0)
            {
                j=1;
                break;
            }
            else
            {
                arr[i]=arr[i]/2;
            }
        }
        if(j==0)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
