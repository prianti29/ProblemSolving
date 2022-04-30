#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    int arr[a];
    for(i=1; i<=a; i++)
    {
        cin>>arr[i];
    }
    int loc;
    loc =1;
    for(i=1; i<a; i++)
    {
        if(arr[i]>arr[i+1])
        {
            loc=0;
            cout<<i+1<<endl;
            break;
        }
       /* else
        {
            loc=0;
        }*/
}
if(loc){
         cout<<"0"<<endl;
     }
 //cout<<loc<<endl;
 return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    int arr[a];
    for(i=1; i<a; i++)
    {
        cin>>arr[i];
    }
    int loc;
    loc =1;
    for(i=1; i<=a; i++)
    {
        if(arr[i]>arr[i+1])
        {
            loc=i+1;
            break;
        }
        else
        {
            loc=0;
        }
    }
    cout<<loc<<endl;
    return 0;
}
