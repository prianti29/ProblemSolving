#include "bits/stdc++.h"
using namespace std;

int main()
{
	double n, m;
	while(cin >> n >> m)
	{
		double add_1 = 0, div = 0, add_2 = 0, ans = 0;
		add_1 = n + n;
		div = add_1 / 13;
		add_2 = div + 13;
		ans = pow(add_2, m);
		cout << fixed << setprecision(3) << ans << endl; 
	}
	
}
