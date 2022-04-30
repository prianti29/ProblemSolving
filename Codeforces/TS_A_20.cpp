#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  arr[3],b[3];
    long long i,j;
    int temp;
    for(i=0;i<3;i++){
    cin>>arr[i];
    b[i]=arr[i];
    }
    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++){
        cout<<b[i]<<endl;
    }

}
