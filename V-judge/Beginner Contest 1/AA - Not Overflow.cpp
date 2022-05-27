#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	
	 if (pow (-2, 31) <= n && n <= pow (2, 31)-1) {
        cout << "Yes\n";
    }
    else
     cout << "No\n";
}
