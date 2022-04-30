#include "bits/stdc++.h"
using namespace std;

int main()

{
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	long long  x = a * c;
	long long  y = a * d;
	long long  m = b * c;
	long long  n = b * d; 
	
	
	cout << max (x, y, m, n) << endl;
}
