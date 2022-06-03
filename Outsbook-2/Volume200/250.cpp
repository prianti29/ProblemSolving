#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n, m, l;
	cin >> n >> m >> l;
	long long ans = n * m;
	long long ans1 = (l * ans) / 100;
	cout << ans + ans1 << " Points" << endl;
}
