#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n;
	while(cin >> n){
		for(int i = n - 1; i >= 0; i--){
			for(int j = 0; j <= i; j++){
				cout << "*";
			}
			cout << endl;
		}
		
	}
}
