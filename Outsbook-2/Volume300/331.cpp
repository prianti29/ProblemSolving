
#include "bits/stdc++.h"
using namespace std;

int main()
{
	double h;
	while (cin >> h){
		double ans = 0, w = 0;
		w = h * 1.5;
		
		ans = sqrt((h * h) + (w * w));
		cout << fixed << setprecision(2) << ans << endl;
	}
	
}
