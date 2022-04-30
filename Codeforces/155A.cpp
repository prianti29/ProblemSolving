#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,t,cnt=0;
    cin>>t;
    long long arr[t];
    ///long long max=0,min=0;
    cin.ignore();
   // long long max=arr[0],min=arr[0];
    for(i=0; i<t; i++)
    {
        cin>>arr[i];
    }
    long long max=arr[0],min=arr[0];
      ///sort(arr,arr+n);
      for(i=1;i<t;i++){
        if(arr[i]<min)
        {
            //min=arr[i];
            // min=i;
            cnt++;
            min=arr[i];
        }
        if(arr[i]>max)
            // else if(arr[i]>maxa)
        {
            // max=i;
            //max=arr[i];
            cnt++;
            max=arr[i];
        }
      }


    cout<<cnt;
}
