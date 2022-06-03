
#include "bits/stdc++.h"
using namespace std;

int main()
{
	double x, y, t;
	cin >> x >> y >> t;
	double ans = (y - x) / t;
	double ans1 = (x * t)+(0.5 * ans * t * t);
	cout << setprecision(1) << fixed << ans << endl << ans1 << endl;
	
}
