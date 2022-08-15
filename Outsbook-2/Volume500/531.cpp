#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n;
	while(cin >> n){
		long long cnt = 0;
		for(int i = 1; i <= n; i++){
			if(n % i == 0){
				cnt++;
				
			}
		}
		if(cnt == 2){
			cout << "prime number" << endl;
		} else{
			cout << "composite number" << endl;
		}

	}
}
