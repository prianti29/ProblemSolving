#include "bits/stdc++.h"
using namespace std;

int main()

{
	string str;
	int n = 45;
	cin >> str;
	
	
	for(int i = 0; i < (int)str.size(); i++){
		 n -= (str[i] - '0');
	}
	cout << n << endl;
	
}
