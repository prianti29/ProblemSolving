#include "bits/stdc++.h"
using namespace std;

int main()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	int ans = ((a + b + c + d) - e) / 4;
	cout << "x = " << ans << endl;
	cout << "l = " << a - ans << endl;
	cout << "m = " << b - ans << endl;
	cout << "n = " << c - ans << endl;
	cout << "o = " << d - ans << endl;
	
	
	
}
