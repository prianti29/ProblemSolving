#include "bits/stdc++.h"
using namespace std;

int main()
{
	double a, b, c;
	while(cin >> a >> b >> c)
	{
		double s = 0, ans = 0;
		double result = 0;
		if(a + b > c && a + c > b && b + c > a){
		s = (a + b + c) / 2;
		ans = s * ((s - a) * (s - b) * (s - c));
		result = sqrt(ans);
		cout << fixed << setprecision(2) << result << endl;
	} else {
	 cout << "0.00" << endl;	
	}
	}
}
