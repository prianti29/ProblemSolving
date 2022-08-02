#include "bits/stdc++.h"
using namespace std;

int main()
{
	vector<int>v;
	long long a, b, c;
	while(cin >> a >> b >> c){
		if(a <= b && a >= c || a <= c && a >= b){
			cout << a * a << endl;
		}
		else if(c <= b && c >= a || c <= a && c >= b){
			cout << c * c << endl;
		}
	    else{
			cout << b * b << endl;
		}
	}
}
