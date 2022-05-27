#include "bits/stdc++.h"
using namespace std;

int main()
{
	int d, x, y;
	cin >> d >> x >> y;
	
	int ans = x / d;
	int ans1 = ans / 12;
	cout << ans1 * y << " Taka"<< endl;
}
