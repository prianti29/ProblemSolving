#include "bits/stdc++.h"
using namespace std;

int main()
{
	double f;
	while(cin >> f){
		double ans = 0;
		ans = (f - 32) / 1.8000;
		cout << fixed << setprecision(2) << ans << " C" << endl;
	}
}
