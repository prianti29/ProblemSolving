#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    meow;
    ll t,n;
    cin>>t;
    while(t--){
        ll red=0;
        ll blue=0;
        string str1,str2;
        cin>>n;
        cin>>str1>>str2;
        for(ll i=0;i<n;i++)
        {

            if(str1[i]>str2[i]){
                red++;
            }
            else if(str1[i]<str2[i]){
                blue++;
            }
        }
       /** for(ll i=0;i<n;i++){
            cin>>b;
             sum1+=b;
        }**/
        ///ll arr[n][n];
        /**for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }**/
        if(red>blue){
            cout<<"RED"<<endl;
        }
        else if(red<blue){
            cout<<"BLUE"<<endl;
        }
        else{
            cout<<"EQUAL"<<endl;
        }
    }
}
