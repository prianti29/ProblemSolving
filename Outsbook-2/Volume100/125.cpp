
#include "bits/stdc++.h"
using namespace std;

int main()
{
	
	int s1, d1, d2, s2;
	cin >> s1 >> d1 >> d2 >> s2;
	int ans = s1 * d1;
	int ans1 = s1 * d2;
	int ans2 = ans - ans1;
	int ans3 = s1 + s2;
	cout << ans2 / ans3 << " days"<< endl;
	
}
