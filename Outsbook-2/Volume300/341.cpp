#include "bits/stdc++.h"
using namespace std;

int main()
{
	double n, x;
	while(cin >> n >> x)
	{
		double ans = 0;
	    ans = (x / 365) / n;
		cout << fixed << setprecision(3) << ans << " taka" << endl;
	}
}

