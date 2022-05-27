#include "bits/stdc++.h"
using namespace std;

int main()
{

	int a, b, c;
	cin >> a >> b >> c;
	int m = a + b;
	int n = b + c;
	int o = a + c;
	cout << max(o,max(m,n)) << endl;

}
