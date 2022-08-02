#include "bits/stdc++.h"
using namespace std;
int main()
{
	long long n, m, l;
	while(cin >> n >> m >> l)
	{
		 double ans, ans1;
		 ans = 100 + l;
		 ans1 = (ans * n * m)/100;
		 cout << ans1 << " Points" << endl;
	}
}
