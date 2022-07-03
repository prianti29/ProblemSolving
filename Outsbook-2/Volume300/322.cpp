
#include "bits/stdc++.h"
using namespace std;
int main()
{
	double a, h;
	while(cin >> a >> h){
		double ans = 0, a1 = 0;
		a1 = 2 * a;
		ans = ((a + a1) / 2) * h;
		cout << fixed << setprecision(2) << ans << endl;
	}
}
