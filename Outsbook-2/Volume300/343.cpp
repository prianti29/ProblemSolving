#include "bits/stdc++.h"
using namespace std;

int main()
{
	double x1, x2, y1, y2;
	while (cin >> x1 >> x2 >> y1 >> y2){
		double ans = 0, result = 0, ans1 = 0, n= 0, m = 0;
		m = x1 - x2;
		n = y1 - y2;
		ans = pow(n,2); 
		
		ans1 = pow(m,2);
		
		result = sqrt(ans + ans1);
		cout << fixed << setprecision(2) << result << endl;
	}
}
