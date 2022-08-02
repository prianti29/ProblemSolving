#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n;
	while (cin >> n)
	{
		if(n > 0){
			for(int i = n; i >= 1; i--){
				cout << i << " ";
			} cout << endl;
		} else {
			cout << 0 << endl;
		}
	}
}
