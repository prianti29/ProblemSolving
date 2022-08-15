#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	
	while(cin >> n && n != 0){
		int cnt = 0;
		double total = 0, avg;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		} for(int i = 0; i < n; i++){
			if(arr[i] > 0) {
				cnt++;
				total += arr[i];
			}
		}
		if(total == 0){
			cout << 0 << endl;
		} else{
			avg = float(total / cnt);
			cout << fixed << setprecision(3) << avg << endl;
		}
	}
	
}
