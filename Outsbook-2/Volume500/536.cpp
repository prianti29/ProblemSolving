#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n;
	while(cin >> n){
		long long temp = n;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j < i; j++){
				cout << " ";
			} 
			for(int k = 1; k <= temp; k++){
				cout << "*";
			} temp--;
			cout << endl;
		}
	}
}
