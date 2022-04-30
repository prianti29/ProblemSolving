
#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t;
	int n;
	cin >> t;
	while(t--)
	{
		map<int, int> cnt;
		int  ans = -1;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++){
			cin >> arr[i];
			cnt[arr[i]]++ ;
			if(cnt[arr[i]] == 3){
				ans = arr[i];
			}
		}
		if(ans){
			cout << ans << endl;
		}
		else{
			cout << "-1" << endl;
		}
	}
}
