
#include "bits/stdc++.h"
using namespace std;

int main()
{
	double l;
	while (cin >> l){
		double ans = 0;
		ans = ((l * l) / 2) / 10000;
		cout << fixed << setprecision(2) << ans << " m^2" << endl;
	}
	
}
