#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long s, e;
	while(cin >> s >> e)
	{
		long long sum = 0;
		sum = s + e;
		if(sum % 2 == 0){
			cout << sum / 2 << endl; 
		} else {
			cout << sum / 2 << " " << (sum / 2) + 1 << endl;
		}
	}
}
