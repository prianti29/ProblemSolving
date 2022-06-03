#include "bits/stdc++.h"
using namespace std;

int main()
{
	double m, v;
	cin >> m >> v;
	double ans = ((m * 10) + v) / 100;
	cout << setprecision(2) << fixed << ans << " cm" << endl;
}
