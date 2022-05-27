#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long x, y;
	cin >> x >> y;
	long long ans1 = x - y;
	long long ans = ans1/2;
	cout << ans + y << " " << ans << endl;
}
