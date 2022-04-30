#include<bits/stdc++.h>
using namespace std;
int main()
{
    //long long a=0,b=0,c,a1,b1,c1,;
    long long arr1[3],arr2[3],i,j,k;
    for(i=0;i<3;i++)
    {
        cin>>arr1[i];
    }
    for(j=0;j<3;j++)
    {
        cin>>arr2[j];
    }
    long long a=0,b=0;
    for(k=0;k<3;k++)
    {
        if(arr1[k]>arr2[k])
            a++;
        else if(arr1[k]<arr2[k])
            b++;
    }
    cout<<a<<" "<<b;
}
