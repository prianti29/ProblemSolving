#include "bits/stdc++.h"
using namespace std;

int main()
{
	double l;
	cin >> l;
	cout << "L = " << l << endl;
	cout << "W = " << (l * 6) / 10 << endl;
	cout << "R = " << l / 5 << endl;
	double x = l * 0.45;
	double y = ((l * 6) / 10) / 2;
	cout << setprecision(1) << fixed << "(X, Y) = (" << x << ", " << y << ")" <<endl;

}
