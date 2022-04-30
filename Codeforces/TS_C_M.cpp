#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,minn,maxx;
    cin>>n;
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxx=abs(arr[0]-arr[1]);
    for(i=0;i<n-1;i++){
      minn=abs(arr[i]-arr[i+1]);
      if(minn>maxx){
        maxx=minn;
      }
    }
    cout<<maxx<<endl;
}
