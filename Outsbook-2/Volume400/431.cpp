#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long m, n;
	while(cin >> m >> n){
		long long rabbits = (n - (m * 2))/2;
		long long birds = m - rabbits;
		cout << birds << " " << rabbits << endl;
	}
}
