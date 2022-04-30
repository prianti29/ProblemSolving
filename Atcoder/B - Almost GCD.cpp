
#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t,i;
	int arr[10000];
	cin >> t;
	for( i = 0; i < t; i++)
	{
		cin >> arr[i];	
	}
	
	int max_cnt = 0;
	int element = -1;

	for( i = 2; i <= 1000; i++){
		int cnt = 0;
		for(int j = 0; j < t; j++ ){
			if(arr[j] % i == 0){
				cnt++;
			}
		}
		
		if(cnt > max_cnt){
			//cout << i << " " << cnt << endl;
			max_cnt = cnt;
			element = i;
		}
	}
	cout << element << endl;	
}



