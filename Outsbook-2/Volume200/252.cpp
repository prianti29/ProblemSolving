#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long m, n, d, p, q, t;
	cin >> m >> n >> d >> p >> q >> t;
	long long person1 = p;
	long long days1 = d * m * n;
	long long taka1 = t * d * m * n * p;
	cout << "Person : " << person1 << endl;
	cout << "Days   : " << days1 << " Days" <<  endl;
	cout << "Charge : " << taka1 << " Taka"<< endl;
	cout << endl;
	cout << "Person : " << p + q << endl;
	cout << "Days   : " <<  (m * n * d * p) / (p + q)<< " Days" <<  endl; 
	cout << "Charge : " << taka1 << " Taka"<< endl;
}
