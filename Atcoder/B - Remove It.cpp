#include "bits/stdc++.h"
using namespace std;

int main()

{
	int t,n;
	cin >> t >> n;
	int arr[t];
	for(int i = 0; i < t; i++){
		cin >> arr[i];
		if(arr[i] == n){
			cout << "";
		}else{
			cout << arr[i] << " ";
		}
	}
	
}
