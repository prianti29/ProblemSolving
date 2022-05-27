#include "bits/stdc++.h"
using namespace std;

int main()
{
	string str;
	cin >> str;
	int n = str.size();
	
	bool upperCase = false, lowerCase = false;
	for(int i = 0; i < n; i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			upperCase = true;
			break;
		}
	}
	for(int i = 0; i < n; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			lowerCase = true;
			break;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(str[i] == str[j] && i != j){
		    cout << "No\n";
			return 0;
			}
		}
	}
	if(lowerCase && upperCase){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
}
