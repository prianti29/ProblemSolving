#include "bits/stdc++.h"
using namespace std;

int main()

{
	string str;
     cin >> str;
     int n = str.size();
	cout << (str[0]-'0') * (str[n-1]-'0') << endl;
}
