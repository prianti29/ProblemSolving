
#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n, t;
	cin >> t;
	while(cin >> t && t != 0){
		long long a;
		vector<int>v;
		
		for(int i = 0; i < t; i++){
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
	    cout << v[0] << endl;
		
	}
		

}
