#include "bits/stdc++.h"
using namespace std;
int main()
{
	int d1, d2, t;
	cin >> d1 >> d2 >> t;
	int ans = (d1 * d2 * t) / (d2 - d1);
	cout << ans  << endl;
}
