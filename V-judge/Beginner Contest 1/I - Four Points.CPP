#include "bits/stdc++.h"
using namespace std;

int main()

{
	long long b1, b2, b3, x, a2, a1, a3, y, ans = 0;
	
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	cin >> a3 >> b3;
	
	if(a1 == a2) x = a3;
	if(b2 == b3) y = b1;
	if(a2 == a3) x = a1;
	if(b1 == b2) y = b3;
	if(a1 == a3) x = a2;
	if(b1 == b3) y = b2;
	
	
	cout << x << " " << y << endl;
}
