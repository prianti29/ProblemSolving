
#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n, m, sum = 0;
	cin >> n;
	int ans = pow(n,2);
	int main = ans;
	while(ans > 0){
		m = ans % 10;
		sum += m;
		ans = ans / 10;
	}
	int ans1 = pow(sum,2);
	int ans2 = main - ans1;
	int ans3 = pow(ans2,2);
	cout << ans3 % 10;
}
