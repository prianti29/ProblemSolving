#include "bits/stdc++.h"
using namespace std;

int main()
{
	double r, R;
	while(cin >> r >> R)
	{
		double area_r = 0, area_R = 0;
		area_r = 3.1416 * r * r;
		area_R = 3.1416 * R * R;
		cout << fixed << setprecision(2) << area_R - area_r << endl;  
	}
}
