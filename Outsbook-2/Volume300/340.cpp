#include "bits/stdc++.h"
using namespace std;

int main()
{
	double l;
	while(cin >> l)
	{
		double ans = 0;
	    ans = pow(sqrt(l / 6) , 3);
		cout << fixed << setprecision(2) << ans << endl;
	}
}
