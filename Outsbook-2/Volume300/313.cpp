#include "bits/stdc++.h"
using namespace std;
int main()
{
	long long n, sum = 0;
	while(cin >> n)
	{
		long long ans1 = n * n;
		long long temp = ans1;
		
		while(ans1 != 0){
			sum += ans1 % 10;
			ans1 = ans1 / 10;
		}
		
		long long ans2 = sum * sum;
		
		long long ans3 = temp - ans2;
		long long ans4 = ans3 * ans3;
		cout  << ans4 % 10 << endl;
		
	}
}
