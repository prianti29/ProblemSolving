
//~ sort based on prime and non prime =>
//~ where primes will be sorted in accending order & non primes will be sorted in decending order

#include "bits/stdc++.h"
using namespace std;

bool isPrime(int n){
	if(n < 2){
		return false;
	} 
	for(long long i = 2; i * i <= n; i++){
		if(n % i == 0 ){
			return false;
		}
	}
	return true;

}
 //~ a = prime && b  = prime 
 //~ a = prime && b = not prime
 //~ a = not prime && b = prime
 //~ a = not prime && b = prime
 
bool comparator (int a, int b){
	if(isPrime(a) && isPrime(b)){
		if(a < b){
			return true;
		}else{
			return false;
		}
	}
	if(isPrime(a) && !isPrime(b)){
		return true;
	}
	
	if(!isPrime(a) && isPrime(b)){
		return false;
	} 
	if(!isPrime(a) && !isPrime(b)){
		if(a < b) return false;
		else return true;
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
 
