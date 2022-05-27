#include "bits/stdc++.h"
using namespace std;

int main()

{
	int n, m, o;
	cin >> n;
	 m = (n % 100) * 10  + n / 10;
	 o = (n % 10) * 100  + n / 100;
	 //cout << o << endl;
	cout << m + n + o;
	
	
}
