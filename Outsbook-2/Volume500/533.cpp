#include "bits/stdc++.h"
using namespace std;

int main()
{
	double x1, x2, y1, y2;
	char c1, c2;
	while(cin >> x1 >> c1 >> x2 >> y1 >> c2 >> y2){
		float ans1 = 0 , ans2 = 0;
		ans1 = x1 / x2;
		ans2 = y1 / y2;
	    if(ans1 > ans2){
			cout << "x > y" << endl;
		} else if(ans1 < ans2){
			cout << "x < y" << endl;
		} else {
			cout << "x = y" << endl;
		}
	}
}
