
#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long t;
	cin >> t;
	long long arr[t];
	
	for(int i = 0; i < t; i++){
		cin >> arr[i];
	}
	long long ans = 0;
	for(int i = 1; i <= t-1; i++){
		if(arr[i] < arr[i-1]){
			ans += arr[i-1] - arr[i];
			
			arr[i] += arr[i-1] - arr[i];
		}
	}
	cout << ans << endl;
}
	



