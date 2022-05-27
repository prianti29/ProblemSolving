#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ans = (n * 567) / 9;
	int ans1 = (ans + 7492) * 235;
	int ans2 = (ans1 / 47) - 498;
	cout << ans2 << endl;
}
