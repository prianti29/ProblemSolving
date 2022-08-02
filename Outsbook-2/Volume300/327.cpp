#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long m, n, o, p;
	while(cin >> m >> n >> o >> p)
	{
		long long ans = 0;
		ans = (m - n) + (o - p);
		cout << ans << endl;
	}
}
