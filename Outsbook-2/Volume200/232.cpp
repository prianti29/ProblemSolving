#include "bits/stdc++.h"
using namespace std;
int main()

{
	double m, n;
	cin >> m >> n;
	double ans = (m + n) / 2;
	double ans1 = m - ans;
	cout << setprecision(2) << fixed << ans / ans1 << endl << ans * ans1 << endl;
}
