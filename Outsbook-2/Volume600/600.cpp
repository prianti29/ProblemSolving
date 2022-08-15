#include "bits/stdc++.h"
using namespace std;
int main()
{
	int t, n;
	cin >> t;
	for(int i = 1; i <= t; i++){
		long long sum = 0;
		cin >> n;
		for(int j = 0; j <= n; j++){
			long long temp = j;
			while(temp != 0){
				sum += temp % 10;
				temp /= 10;
			}
		}
		cout <<"Case " << i << ": " << sum << endl;
	}
}
