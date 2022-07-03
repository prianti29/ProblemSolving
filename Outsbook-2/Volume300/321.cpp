#include "bits/stdc++.h"
using namespace std;

int main()
{
	double r;
	while(cin >> r){
		double ans = 0, ans1 = 0, ans2 = 0, r1 = 0, r2 = 0;
		 r1 = r / 2;
		 r2 = r1 / 2;
		 ans = 3.1416 * r * r;
		 ans1 = 3.1416 * r1 * r1;
		 ans2 = 3.1416 * r2 * r2;
		 
		 cout << fixed << setprecision(2) << ans + ans1 + ans2 << endl ;
	}
}
