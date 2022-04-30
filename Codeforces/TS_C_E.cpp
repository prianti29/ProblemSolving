#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i, num, n, cnt=0, pos;
    cin>>n;
    long long arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>num;
    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            cnt=1;
            pos=i;
            break;
        }
    }
    if(cnt==0)
    {
        cout<<"-1";
    }
    else
    {
        cout<<pos<<endl;
    }
}
