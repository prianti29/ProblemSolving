#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long a, b;
	while(cin >> a >> b)
	{
		if((a + (a + 1) + (a + 2)) > b){
			cout << "A is too larger than B" << endl;
		} else{
			cout << "A is too smaller than B" << endl;
		}
	}
}
