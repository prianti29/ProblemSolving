#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		long long cnt = 1;
		for(int i = n; i >= 1; i--){
			for(int j = 1; j <= i - 1; j++){
				cout << " ";
			}
			for(int k = 1; k <= cnt; k++){
				cout << "*";
			}
			cout << endl;
			cnt++;
		}
	}
}
