#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long x1, x2, x3, y1, y2, y3;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
		long long sum_x = 0, sum_y = 0;
		
		sum_x = x1 + x2 + x3;
		sum_y = y1 + y2 + y3;
		//cout << sum_y << endl;
		long long y = sum_y;
		long long x = sum_x;
		
		//cout << y << endl;
	    if(sum_x % 3 == 0 ){
			cout <<  sum_x / 3 << " " ;	 
		}     
	    if(y % 3 == 0) {
			cout <<  sum_y / 3 << " " << endl;	 
		}
		else {
			cout << x << "/3" << y << "/3" << endl; 
		}
	
		
	}
}
