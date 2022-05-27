
#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t, x, y;
	cin >> t >> x >> y;
	
	int ans1 = x + y;
	int ans2 = t - ans1;
	
	cout << 12 * ans2 << " Taka"<< endl;
}
