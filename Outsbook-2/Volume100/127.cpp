
#include "bits/stdc++.h"
using namespace std;

int main()

{
	int x, x1, x2;
	cin >> x >> x1 >> x2;
	int proma = (x + (x1 - x2)) / 3;
	cout << "Proma " << proma << ", " << "Rimi " << proma - x1 << ", " << "Monisha " << proma + x2;
	
}
