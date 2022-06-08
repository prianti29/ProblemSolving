#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long x, m;
	while(cin >> x >> m){
		long long ans1 = x /7;
		long long ans2 = ans1 * m;
		cout << ans2 << endl;
	}
}
