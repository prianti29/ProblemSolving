#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n;
	while(cin >> n)
	{
		long long ans = n / 5;
		cout << ans - 4 << " " << ans - 2 << " " << ans << " " << ans + 2 << " " << ans + 4 << endl;  
	}
}
