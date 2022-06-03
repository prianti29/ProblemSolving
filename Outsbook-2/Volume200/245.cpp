
#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long m, n;
	cin >> m >> n;
	cout << (m - n) * 365 << endl << ((m - n) * 365) % 100 << endl;
}
