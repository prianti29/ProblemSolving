#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll i,j;
    ll arr[3][3];
    ll arr1[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    arr1[0][0]=arr[0][0]+arr[0][1]+arr[1][0];
    arr1[0][1]=arr[0][0]+arr[0][1]+arr[0][2]+arr[1][1];
    arr1[0][2]=arr[0][1]+arr[0][2]+arr[1][2];
    arr1[1][0]=arr[1][0]+arr[0][0]+arr[2][0]+arr[1][1];
    arr1[1][1]=arr[1][0]+arr[1][1]+arr[1][2]+arr[0][1]+arr[2][1];
    arr1[1][2]=arr[1][1]+arr[1][2]+arr[0][2]+arr[2][2];
    arr1[2][0]=arr[2][0]+arr[2][1]+arr[1][0];
    arr1[2][1]=arr[2][0]+arr[2][1]+arr[1][1]+arr[2][2];
    arr1[2][2]=arr[2][1]+arr[2][2]+arr[1][2];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(arr1[i][j]%2==0){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }
        cout<<endl;
    }

}
