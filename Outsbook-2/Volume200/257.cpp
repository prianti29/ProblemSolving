#include "bits/stdc++.h"
using namespace std;

int main()
{
    double l, n;
	cin >> l >> n;
	double ans = n / l;
	double ans1 = ans / (2 * 3.1416);
	cout << fixed << setprecision(2) << ans1  << " km" << endl;
}
