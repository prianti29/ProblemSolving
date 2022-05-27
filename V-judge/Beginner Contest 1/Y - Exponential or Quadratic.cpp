
#include "bits/stdc++.h"
using namespace std;

int main()
{
	double n;
	cin >> n;
	double a = pow(2, n);
	double b = pow(n , 2);
	//cout << a << " " << b << endl;
	if(a > b) cout << "Yes" << endl;
	else cout << "No" << endl;  
}
