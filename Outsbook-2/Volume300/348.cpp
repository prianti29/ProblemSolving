
#include "bits/stdc++.h"
using namespace std;

int main()
{
	double w1, w2, w3, h1, h2, h3;
	while(cin >> w1 >> w2 >> w3 >> h1 >> h2 >> h3)
	{
		double wall = 0, door = 0, window = 0, ans = 0;
	    wall = (w1 * h1 * 4) / 2;
		door = (w2 * h2) / 2;
		window = (w3 * h3) /2;
		ans = door + window;
		cout << fixed << setprecision(1) << wall << " " << ans << endl;
	}
	
}

