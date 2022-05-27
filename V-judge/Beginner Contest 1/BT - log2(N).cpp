#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n, m = 1, ans;
	
	cin >> n;
	long long cnt = 0;
	while(m <= n){
		m *= 2;
		cnt++;
	}
	
	cout << cnt - 1 << endl;
}
