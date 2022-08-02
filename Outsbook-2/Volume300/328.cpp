#include "bits/stdc++.h"
using namespace std;

int main()
{
	double h;
	while (cin >> h)
	{
		double w = 0, rec = 0, tri = 0;
		w = h * 4;
		rec = h * w;
	    tri = rec / 2;
	    cout << fixed << setprecision(2) << "Area of Rectangle: " << rec << endl;
	    cout << fixed << setprecision(0) << "Area of Triangle: " << ceil(tri) << endl;
	}
}
