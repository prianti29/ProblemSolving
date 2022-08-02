
#include "bits/stdc++.h"
using namespace std;

int main()
{
	double m;
	while(cin >> m)
	{
		double ans = 0, result = 0, ans1 = 0;
		ans = 1 / m;
		ans1 = m + ans;
		result = pow(ans1 , 4);
		cout << fixed << setprecision(3) << result << endl; 
		
	}
	
	
}
