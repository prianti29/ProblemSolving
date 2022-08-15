#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n;
	while(cin >> n)
	{
		long long sum = 0;
		for(int i = 1; i <= n; i++)
		{
			sum += i;
		}
		cout << sum << endl;
	}
	
}
