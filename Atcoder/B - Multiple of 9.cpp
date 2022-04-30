#include "bits/stdc++.h"
using namespace std;

int main()

{
	string str;
	
	int cnt = 0;
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		cnt += str[i] - '0';
	}
	if(cnt % 9 == 0){
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}
	
}
