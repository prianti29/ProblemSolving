
#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long m, n;
	while(cin >> m >> n){
		long long ans = 0;
		long long rima =  n - m;
		long long tina = rima * 3;
		ans = m + rima + tina ;
		cout << ans << endl;
	}
}
