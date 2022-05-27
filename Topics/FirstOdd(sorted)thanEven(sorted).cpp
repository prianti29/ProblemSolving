#include "bits/stdc++.h"
using namespace std;


//~ Odd sorted even sorted

bool comparator (int a, int b){
	if(a % 2 != 0 && b % 2 != 0 ){
		if(a > b){
			return false;
		} else {
			return true;
		}
	}
	else if(a % 2 == 0 && b % 2 == 0){
		if(a > b){
			return false;
		} else {
			return true;
		}
	}
	else if(a % 2 == 0 && b % 2 != 0){
		return false;
	} else {
		return true;
	}
	
}

int main()
{
	 ios::sync_with_stdio(false);
	 cin.tie(nullptr);
	 cout.tie(nullptr);
	 
	 vector <int> v =  {1, 3, 4, 2, 5, 3};
	 sort(v.begin(), v.end(), comparator);
	 for(int i = 0; i < (int)v.size(); i++){
		 cout << v[i] << " ";
	 }
}
