
#include "bits/stdc++.h"
using namespace std;

int main()
{
	double n;
    
    while(cin >> n){
		double l = 0, w = 0, r = 0, x = 0, y = 0, x1 = 0;
		l = (n * 6) / 6;
		w = (n * 6) / 10;
		r = (l - w) / 2;
		x1 = (r / 2 );
		x = (l - x1) / 2;
		y = w / 2;
		cout << fixed << setprecision(0) << "L = " << l << endl;
		cout << fixed << setprecision(0) << "W = " << w << endl;
		cout << fixed << setprecision(0) << "R = " << r << endl;
		cout << fixed << setprecision(2) << "(X, Y) = (" << x << ", " << y << ")"<< endl;
		
		 
		
		
	}
}

