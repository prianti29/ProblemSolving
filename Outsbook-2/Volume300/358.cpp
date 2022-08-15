#include "bits/stdc++.h"
using namespace std;

int main()
{
	int a, b, c, d, e;
	while(cin >> a >> b >> c >> d >> e){
		long long ans = a - b + c - d + e;
	
		if(ans  == 0){
			cout << "Welcome Anna" << endl;
			continue;
		} if (ans % 11 == 0) {
			cout << "Anna can enter" << endl;
		} else {
			cout << "Anna cannot enter" << endl;
		}
	}
}
