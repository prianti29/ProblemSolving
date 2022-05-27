#include "bits/stdc++.h"
using namespace std;

//~ Comparator (Decrieasing order)

/* bool comparator(int a, int b){
	 if(a > b){
		return true;
	 } else {
		 return false;
	 }
}*/ 


bool comparator(int a, int b){
	if(a < b){
		return true;
	} else {
		return false;
	}
}


int main()
{
	 vector<int> v = {3, 4, 1, 5, 6, 7};
	//~ vector sort with stl
	/* sort(v.begin(), v.end());
	   reverse(v.begin(),v.end());
	   sort(v.rbegin(),v.rend());  */
	
	//For increasing and decresing
	sort(v.begin(), v.end(), comparator); 
	 for (int i = 0; i < (int) v.size(); ++i) {
		 cout << v[i] << ' ';
	 }
}
