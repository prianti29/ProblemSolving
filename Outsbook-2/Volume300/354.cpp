#include "bits/stdc++.h"
using namespace std;

int main()
{
	int m, n;
	while(cin >> m >> n)
	{
		long long ans_x = 0, ans_y = 0;
		ans_x = (m + n) / 2;
		ans_y = (m - n) / 2;
		cout << ans_x << " " << ans_y << endl;
	}
}
