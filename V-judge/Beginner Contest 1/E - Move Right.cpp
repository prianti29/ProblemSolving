#include "bits/stdc++.h"
using namespace std;

int main()

{
	string str;
	cin >> str;
	
	cout << "0" ;
	for(int i = 1; i < (int)str.size(); i++){
		cout << str[i-1];
	}
}
