#include "bits/stdc++.h"
using namespace std;

int main()
{
	double m, n;
	cin >> m >> n;
	double ans = (n / m) / 3;
	double ans1 = sqrt(ans);
	cout << fixed << setprecision(2) << "The length is " << ans1 << " meter" << endl;
	cout << fixed << setprecision(2) << "The width  is " << ans1 * 3<< " meter";
	 
}
