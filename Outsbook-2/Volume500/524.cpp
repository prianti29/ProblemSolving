
#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long a,n;
		while(cin >> n){
			vector<int>v;
		for(int i = 0; i < n; i++){
			cin >> a;
			v.push_back(a);
		}
		//~ reverse(v.begin(), v.end());
		for(int i = 0; i < n; i++){
			cout << v[i] << endl;
		}
	}
	
}
