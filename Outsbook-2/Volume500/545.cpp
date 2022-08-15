#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long t, year;
	cin >> t;
	while(t--)
	{
		cin >> year;
		if(year % 400 == 0 ){
			cout << "Leap year" << endl;
		} else if(year % 100 == 0) {
			cout << "Ordinary year" << endl;
		} else if(year % 4 == 0){
			cout << "Leap year" << endl;
		} else {
			cout << "Ordinary year" << endl;
		}
	}
}
