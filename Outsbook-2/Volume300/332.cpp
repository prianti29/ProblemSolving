

#include "bits/stdc++.h"
using namespace std;

int main()
{
	double w, p;
	while (cin >> w >> p){
		double ans = 0, h = 0;
		h = (w * p) / 100;
		
		ans = (2 * h) + (2 * w);
		cout << fixed << setprecision(2) << ans << endl;
	}
	
}
