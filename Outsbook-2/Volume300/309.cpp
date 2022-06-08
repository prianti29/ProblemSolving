#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n;
	while(cin >> n){
		long long ans = n / 4;
		cout << ans - 3 << " " << ans - 1 << " " << ans + 1  << " " << ans + 3 << endl;
	}
}
