#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n, m;
	while(cin >> m >> n)
	{
		long long ans = 0, ans1 = 0;
		ans = m - n;
		ans1 = ans * 365;
		cout << ans1 << endl << ans1 % 100 << endl;
		
	}
}
