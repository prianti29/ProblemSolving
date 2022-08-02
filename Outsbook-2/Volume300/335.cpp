#include "bits/stdc++.h"
using namespace std;

int main()
{
	double x, y;
	while(cin >> x >> y)
	{
		double ans = 0;
		ans = y / x;
		cout << fixed << setprecision(3) << ans << " liter"<< endl;
	}
}
