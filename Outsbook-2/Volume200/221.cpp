
#include "bits/stdc++.h"
using namespace std;
int main()
{
	int m, p, c, d;
	cin >> m >> p >> c >> d;
	
	int ans = ((p * c) + d);
	int ans1 = ans / (m - p);
	cout << ans1 << " " << ans1 * m << endl;
}
