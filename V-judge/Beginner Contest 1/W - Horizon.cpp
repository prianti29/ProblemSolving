#include "bits/stdc++.h"
using namespace std;

int main()
{
	double n;
	cin >> n;
	
	double a = 12800000 + n;
	double b = n * a;
	cout << fixed << setprecision(2) << sqrt(b) << endl;
}
