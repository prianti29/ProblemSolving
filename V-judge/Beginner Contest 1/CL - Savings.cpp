#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	cin >> n;
	int day = 0, ans = 0;
	
	while(ans < n){
		ans += day;
		++day ;
	}
	cout << day-1 << endl;
	
}
