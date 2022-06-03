#include "bits/stdc++.h"
using namespace std;

int main()
{
	double s, l;
	cin >> s >> l;
	double ans = sqrt((s * s) + (l * l));
	cout << setprecision(2) << fixed << ans << endl;
}
