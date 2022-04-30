#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define all(v) v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

int main()
{
    ll t,n,a,i,maxx;
    cin>>t;
    while(t--){

       cin >> n;
		 long long int arr[n+1];
		 for(int i = 1; i <= n; i++){
			 cin >> arr[i];
		 }
        //sort(arr,arr+n);
       reverse(arr + 1,arr + n + 1);
		 maxx = 0;
         for(int i = 2; i <= n; i++){
			 arr[i] += arr[i - 1];
		 }
       // cout<<endl;
        for(int i = 1; i <= n; i++){
			 maxx = max(maxx,arr[i]);
		 }
           // cout<<arr[i]<<" ";

    cout<<maxx<<endl;
    }
}

