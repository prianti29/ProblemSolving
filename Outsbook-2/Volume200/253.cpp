#include "bits/stdc++.h"
using namespace std;
int main()
{
	int n, m, t;
	cin >> n >> m >> t;
	int ans = n / m;
	int ans1 = ans * t;
	int ans2 = (ans1 - ans) + 1;
	cout << ans2 << " " << ans1 << endl;
	
} 
