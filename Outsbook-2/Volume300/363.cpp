#include "bits/stdc++.h"
using namespace std;

int main()
{
	int a, b, c;
	while(cin >> a >> b >> c)
	{
		if(a + b <= c || a + c <= b || b + c <= a){
			cout << "Invalid." << endl;
		} else {
			cout << "Valid." << endl;
		}
	}
}
