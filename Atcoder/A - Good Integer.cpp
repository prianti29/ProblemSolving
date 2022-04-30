#include "bits/stdc++.h"
using namespace std;

int main()
{
	string str;
	int cnt = 0;
	cin>> str;
	
	for (int i = 0; i <= (int)str.size() ; i++){
	
		if(str[i] == str[i + 1] && str[i + 1] == str[i + 2]){
			cnt = 1;
			break;
		}
	}
	
	if(cnt == 1){
		cout << "Yes" << endl;
	}
	else{
		cout<< "No" << endl;
	} 
	
}
