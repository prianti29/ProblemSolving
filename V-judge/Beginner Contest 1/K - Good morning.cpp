#include "bits/stdc++.h"
using namespace std;

int main()

{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	if(a == c && b <= d ){
		cout << "Takahashi" << endl;
		return 0;
	}
	if( a < c ){
		cout << "Takahashi" << endl;
		return 0;
	}
	else{
		cout << "Aoki" << endl;
	}
}
