#include "bits/stdc++.h"
using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int n = str1.size();
	int m = str2.size();
	int res = m;
	
	for(int i = 0; i<= n - m; i++){
		int cnt = 0;
		int l = i;
		int r = 0;
		while(r < m){
			if(str1[l++] != str2[r++]){
				cnt++;
			}
		}
		res = min(res, cnt);
	}
	cout << res << endl;
	
	
}
