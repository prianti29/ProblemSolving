#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n, x;
	while(cin >> n >> x)
	{
		if(n / 2 <= x){
			cout << "The war is stop." << endl;
		} else {
			cout << "The war is going on." << endl;
		}
	}
}
