#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n;
    cin>>t;
    int arr[t];
    {
        for(i=0; i<t; i++)
        {

            cin>>arr[i];
        }
        for(n=0; n<t; n++)
        {
            if(arr[n]<=10)
                cout<<"A["<<n<<"]"<<" = "<<arr[n]<<endl;
        }
    }
}

