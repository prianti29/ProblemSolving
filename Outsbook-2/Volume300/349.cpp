#include "bits/stdc++.h"
using namespace std;

int main()
{
	double m, n, t;
	while(cin >> m >> n >> t)
	{
		double ans = 0;
		double M, N;
		M = (1 / m);
		N = (2 / n);
		ans = (M + N) * t;
		cout << fixed << setprecision(0) << ans << " times" << endl;
	}
}
