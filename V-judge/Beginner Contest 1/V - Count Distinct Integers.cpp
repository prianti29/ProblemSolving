#include "bits/stdc++.h"
using namespace std;

int main()

{
	int t,n;
	cin >> t;
	vector<int> v;
	
	for (int i = 0; i < t; i++){
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	int cnt =0;
	for(int i = 0; i < t; i++){
		if(v[i] == v[i+1]){
			continue;
		}else {
			cnt++;
		}
	}
	cout << cnt << endl;
	
	
}
