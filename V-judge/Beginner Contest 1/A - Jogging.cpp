
#include "bits/stdc++.h"
using namespace std;

int main()

{
	int  a, b, c, d, e, f, x;
	
	cin >> a >> b >> c >> d >> e >> f >> x;
	
	int ans = (a + b) * c;
	int ans1 = (c + d) * e;
	
	if(ans > ans1){
		cout << "Takahashi" << endl;
	}
    if (ans < ans1){
		cout << "Aoki" << endl;
	}
	else 
	cout << "Draw" << endl;
}
