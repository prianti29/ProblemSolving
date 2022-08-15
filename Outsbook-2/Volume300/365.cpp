#include "bits/stdc++.h"
using namespace std;

int main()
{
	int m, n;

	while(cin >> m >> n){
			int ans1 = 0, ans2 = 0;
	
		 for(int i = 1; i <= m; i++){
			 if(i % 2 != 0) ans1++;
		 }
		 for(int j = 1; j <= n; j++){
			 if(j % 2 != 0) ans2++;
		 }
	
		cout << (ans1 * ans2)  << endl;
	}
}
