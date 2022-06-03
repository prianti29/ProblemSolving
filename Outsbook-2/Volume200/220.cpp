#include "bits/stdc++.h"
using namespace std;

int main()
{
	int x1 , y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	int ans1 = (x1 + x2) / 2;
	int ans2 = (y1 + y2) / 2;
	cout << ans1 << " " << ans2;
}

