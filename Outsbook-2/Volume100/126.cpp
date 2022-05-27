
#include "bits/stdc++.h"
using namespace std;

int main()
{
	int x, y, t, t1;
	cin >> x >> y >> t >> t1;
	int ans = x * t1;
	int ans1 = t - ans;
	cout << ans1 / y << " Taka" << endl;
}
