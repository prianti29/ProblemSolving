#include "bits/stdc++.h"
using namespace std;

int main()

{
	string str;
	
	cin >> str;
	
	int n = str.size();
	if(str[n - 1] == 'r' && str[n-2] == 'e'){
		cout << str[n-2] << str[n-1] << endl;
	} 
	if(str[n - 1] == 't' && str [ n - 2] == 's' && str[n - 3] == 'i'){
		cout << str[n - 3] << str[n - 2] << str[n - 1 ] << endl;
	}
	
}
