#include "bits/stdc++.h"
using namespace std;

int main()

{
	string str;
	int a, b;
	cin >> a >> b;
	cin >> str;
	
	reverse (str.begin() + a-1, str.begin() + b);
	cout << str;
}
