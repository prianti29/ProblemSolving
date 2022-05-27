#include "bits/stdc++.h"
using namespace std;


bool comparator(int a, int b){
	// odd(decreasing) --> even(increasing)
	if(a % 2  != 0){
		return true;
	} else {
		return false;
	}
}
/*
bool comparator(int a, int b){
	//even(increasing) --> odd(decreasing)
	if(b % 2 != 0){
		return true;
	} else {
		return false;
	}
}
*/


int main(){
	 ios::sync_with_stdio(false);
	 cin.tie(nullptr);
	 cout.tie(nullptr);
	 
	 vector<int> v = {1, 3, 5, 2, 4, 8};
	 sort(v.begin(), v.end(), comparator); 
	 for (int i = 0; i < (int) v.size(); ++i) {
		 cout << v[i] << " ";
	 }
}
