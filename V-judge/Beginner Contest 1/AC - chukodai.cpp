#include "bits/stdc++.h"
using namespace std;

int main()
{
	string str;
	int a, b;
	cin >> str;
	cin >> a >> b;
	a--, b--;
	swap (str[a], str[b]);
	cout << str << endl;
}
