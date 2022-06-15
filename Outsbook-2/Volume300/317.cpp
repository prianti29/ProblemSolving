#include "bits/stdc++.h"
using namespace std;

int main()
{
	double n, s;
	while (cin >> n >> s){
		double ans = 0;
		ans = (n / 4);
		double ans1 = ans * s;
		double ans3 = ans1 + (ans * (s / 2)) + (ans * (s / 3)) + (ans * (s / 5));
		cout << fixed << setprecision(2) << ans3 << endl;
	}
	
	
}
