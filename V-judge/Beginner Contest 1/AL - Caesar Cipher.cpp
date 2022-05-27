#include "bits/stdc++.h"
using namespace std;

int main()
{
	string s1, s2;
	bool ans = true;
	cin >> s1 >> s2;
	vector<int>v;
	
	for(int i = 0; i < (int)s1.size(); i++)
	{
		if(s1[i] <= s2[i]){
			int diff = s2[i] - s1[i];
			v.push_back(diff);
		} else {
			int del = 'z' - s1[i];
			del += s2[i] - 'a' + 1;
			v.push_back(del);
		}
		
	}
	for(int i = 0; i < (int)s1.size() - 1; i++){
		if(v[i] != v[i+1]){
			ans = false;
			break;
		}
	}
	if(ans ) {
		cout << "Yes" << endl; 
		return 0;
	}
	cout << "No" << endl;
}
