#include "bits/stdc++.h"
using namespace std;

int main()
{
	int  a, b;
	cin >> a >> b;
	
	int ans = a + b;
	if( ans % 2 == 0){
		cout << ans / 2 <<endl;
	}
	else{
		cout << (int) ceil( (float) ans / 2) << endl;
	}
	
}
