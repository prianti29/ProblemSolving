#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n, T;
	cin >> T;
	while(T--)
	{
		cin >> n;
		//int root = 0;
		long long root = sqrt(n);
		if((root * root) == n){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
 		}
		
	}
}
