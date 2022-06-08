
#include "bits/stdc++.h"
using namespace std;
int main()
{
	long long x, y;
	while(cin >> x >> y){
		long long ans1 = x - y;
		long long ans2 = ans1 / 2;
		cout << ans2 + y << " " << ans2 << endl;
	}
}
