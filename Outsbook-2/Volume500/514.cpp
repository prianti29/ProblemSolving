#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n;
	while(cin >> n && n != 0){
		long long arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}for(int i = 1; i < n; i++){
			if(arr[0] < arr[i]){
				arr[0] = arr[i];
			}
		}
		cout << arr[0] << endl;
	}
}
