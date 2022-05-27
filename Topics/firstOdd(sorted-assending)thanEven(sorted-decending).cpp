
#include "bits/stdc++.h"
using namespace std;


//~ first odd(sorted-assending) than even(sorted-decending)

bool comparator (int a, int b)
{
	if((a & 1) == 0 && (b & 0) == 0){
		if(a > b){
			return true;
		} else {
			return false;
		}
	}
	else if((a & 1) && (b & 1)){
		if(a > b){
			return false;
		} else {
			return true;
		}
	}
	else if((a & 1) == 0 && (b & 1)){
			return false;
		}
	else
		return true;
	

}



int main()
{
	vector<int> v = {1, 3, 5, 2, 4, 8};
	sort(v.begin(), v.end(), comparator);
	for(int i = 0; i < (int) v.size(); i++){
		cout << v[i] << " ";
	}
}
