#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long m, n;
	while(cin >> m >> n)
	{
		if(m > n){
			cout << m << " > " << n << endl;
		} else if(m < n) {
			cout << m << " < " << n << endl;
		} else {
			cout << m << " = " << n << endl;
		}
	}
}
