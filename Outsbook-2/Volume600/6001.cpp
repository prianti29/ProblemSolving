#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n, t;
	cin >> t;
	while(t--){
		long long a;
		vector<int>v;
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		for(int i = 0; i < v.size(); i++){
			cout << v[i] << " ";
		}
		cout << endl;
		
	}
		

}
