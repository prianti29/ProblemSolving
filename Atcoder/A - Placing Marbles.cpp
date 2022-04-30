
#include "bits/stdc++.h"
using namespace std;

int main()

{
	string str;
	int cnt = 0;
	cin>> str;
	for (int i = 0; i < (int)str.size(); i++){
		
		if( str[i] == '1'){
			cnt ++;
			//cout << cnt << endl;
		}
		
	}
	cout<< cnt << endl;
}
