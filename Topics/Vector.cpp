
#include "bits/stdc++.h"

using namespace std;

				//~ true    false
//~ 1
//~ bool comparator (int a, int b) {
	//~ if (a > b) {
		//~ return true;
	//~ } else {
		//~ return false;
	//~ }
//~ }
//~ 2
//~ bool comparator (int a, int b) {
	//~ //a ke kokhon age rakhbo
	//~ if (a % 2 != 0) {
		//~ return true;
	//~ } else {
		//~ return false;
	//~ }
//~ }
//~ 3
//~ bool comparator (int a, int b) {
	//~ // we can check if a number is odd or not by using bitwise & => ex (a & 1) => it will return 1 if a is odd otherwise return 0
	//~ if (a % 2 != 0 && b % 2 != 0) {
		//~ // a and b both are odd
		//~ if (a > b) {
			//~ return false;
		//~ } else {
			//~ return true;
		//~ }
	//~ } else if (a % 2 == 0 && b % 2 == 0) {
		//~ // a and b both are even
		//~ if (a > b) {
			//~ return false;
		//~ } else {
			//~ return true;
		//~ }
	//~ } else if (a % 2 == 0 && b % 2 != 0) {
		//~ // a is even and b is odd
		//~ return false;
	//~ } else {
		//~ // a is odd and b is even
		//~ return true;
	//~ }
//~ }
//~ 4
//~ bool comparator (int a, int b) {
	//~ if ((a & 1) == 0 && (b & 1) == 0) {
		//~ // a and b are both even
		//~ // even(sorted-decending)
		//~ if (a > b) {
			//~ return true;
		//~ } else {
			//~ return false;
		//~ }
	//~ } else if ((a & 1) && (b & 1)) {
		//~ // a and b are both odd
		//~ // odd(sorted-assending)
		//~ if (a > b) {
			//~ return false;
		//~ } else {
			//~ return true;
		//~ }
	//~ } else if ((a & 1) == 0 && (b & 1)) {
		//~ // a is even & b is odd
		//~ return false;
	//~ } else {
		//~ // a is odd & b is even
		//~ return true;
	//~ }
//~ }
//~ 5
//~ bool isPrime(int n) {
  //~ if (n < 2) return false;
  //~ for (long long i = 2; i * i <= n; i++) {
    //~ if (n % i == 0) {
      //~ return false;
    //~ }
  //~ }
  //~ return true;
//~ }
//~ 6
				//~ true  false
//~ bool comparator (int a, int b) {
	//~ //{0, 0}, {1, 0}, {1, 1}, {0, 1}
	//~ // a ke kokhon age rakhbo
	//~ if (isPrime(a)) {
		//~ return true;
	//~ } else {
		//~ return false;
	//~ }
//~ }
 
int main () {
	 ios::sync_with_stdio(false);
	 cin.tie(nullptr);
	 cout.tie(nullptr);
	 vector<int> v = {1, 3, 4, 2, 5, 3};
	 //sort(v.begin(), v.end()); // increasing
	 //reverse(v.begin(), v.end());
	 //sort(v.rbegin(), v.rend());
	 
	 //~ 1
	 //~ sort(v.begin(), v.end(), comparator); // reverse order e sort koruk / decending order 
	 //~ for (int i = 0; i < (int) v.size(); ++i) {
		 //~ cout << v[i] << ' ';
	 //~ }
	 
	 //~ 2
	 //sort based on odd and even parity => first odd than even
	 //~ sort (v.begin(), v.end(), comparator);
	 //~ for (int i = 0; i < (int) v.size(); ++i) {
		 //~ cout << v[i] << ' ';
	 //~ }
	 
	 //~ 3
	 //sort based on even and odd parity => first odd(sorted) than even(sorted)
	 //~ sort (v.begin(), v.end(), comparator);
	 //~ for (int i = 0; i < (int) v.size(); ++i) {
		 //~ cout << v[i] << ' ';
	 //~ }
	 
	 //~ 4
	 //sort based on even and odd parity => first odd(sorted-assending) than even(sorted-decending)
	 //~ sort (v.begin(), v.end(), comparator);
	 //~ for (int i = 0; i < (int) v.size(); ++i) {
		 //~ cout << v[i] << ' ';
	 //~ }
	 //~ 5
	 //sort based on prime and non prime
	 //~ sort (v.begin(), v.end(), comparator);
	 //~ for (int i = 0; i < (int) v.size(); ++i) {
		 //~ cout << v[i] << ' ';
	 //~ }
	 //~ 1) sort based on prime and non prime => where primes will be sorted in accending order & non primes will be sorted in decending order
	 //~ 2) sort based on perfect sqare
}
