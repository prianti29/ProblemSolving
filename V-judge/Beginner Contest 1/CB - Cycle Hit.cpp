#include "bits/stdc++.h"
using namespace std;

int main()

{
	string arr[10];

	for(int i = 0; i < 4; i++){
		cin >> arr[i];
	}
	int a = 0, b = 0, c = 0, d = 0;
	
	for(int i = 0 ; i < 4; i++){
		if(arr[i] == "H") a++;
		if(arr[i] == "2B") b++;
		if(arr[i] == "3B") c++;
		if(arr[i] == "HR") d++;
	}
	if(a * b * c * d == 1){
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}
	
}
