#include "bits/stdc++.h"
using namespace std;

bool isPrime(int n){
	if(n < 2){
		for(long long i = 2; i * i <= n; i++){
			if(n % i == 0 ){
				return false;
			}
		}
	} return true;
}
bool comparator (int a, int b){
	if(isPrime(a))
	{
		return true;
	} else {
		return false;
	}
	
}

int main()
{
	vector<int> v = {1, 3, 4, 2, 5, 3};
	sort(v.begin(), v.end(), comparator);
	for(int i = 0; i < (int) v.size(); i++){
		cout << v[i] << " ";
	}
}
