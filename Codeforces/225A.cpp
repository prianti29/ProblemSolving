#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c=0,bi=0,b=0;
    cin>>t;
    int arr[t];
    for(i=0; i<t; i++)
    {
        cin>>arr[i];
        if(i%3==0)
        {
            c+=arr[i];

        }
        else if(i%3==1)
        {
            bi+=arr[i];

        }
        else
        {
            b+=arr[i];

        }
    }
        if(c>=bi&&c>=b)
        {
            cout<<"chest"<<endl;
        }
        else if(bi>=c&&bi>=b)
        {
            cout<<"biceps"<<endl;
        }
        else
        {
            cout<<"back"<<endl;
        }

        //sort(arr,arr+t);
    //if(arr)

    }
