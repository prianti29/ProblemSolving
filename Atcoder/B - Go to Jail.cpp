#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t;
	int a, b;
	int cnt1 = 0, cnt2 = 0;
	cin >> t;
	for(int i = 0; i < t; i++){
		cin >> a >> b;
		if(a == b){
			cnt1++;
		}else{
			cnt1 = 0;
		}
		cnt2 = max(cnt2, cnt1);
	}
	
	
	
	if(cnt2 >= 3){
		cout << "Yes" << endl;
	}else
	cout << "No" << endl;
}
