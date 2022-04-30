

#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];

		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int odd = 0, even = 0;
		
		for(int i = 0; i < n; i++){
		   if( i % 2 == 0){
			   if (arr[i] % 2 == 0){
				   even++;
			   }
			   else{
				   odd++;
			   }
		   }
		   
		}
		if(odd > 0 && even > 0 ){
			cout << "NO"<< endl;
			continue;
		}
		odd = 0, even = 0;
		for( int i = 0; i < n; i++)
		{
			if(i % 2 != 0){
				if (arr[i] % 2 != 0){
					odd++;
				}
				else {
					even++;
				}
			}
		}
		if(odd > 0 && even > 0){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		
		
		
	}
}



