#include "bits/stdc++.h"
using namespace std;

int main()
{
	int cnt = 0;
	string str;
	cin >> str;
	
	for( int i = 0; i < (int) str.size(); i++){
		if(str[i] == '+')
		cnt++;
		else
		cnt--;
	}
	cout << cnt << endl;
	
}
