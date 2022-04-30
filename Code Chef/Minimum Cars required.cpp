

#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t,n;
	cin >> t;
	while (t--){
		cin >> n;
		
		if( n <= 4 && n != 0){
			cout<< '1' << endl;
		}
		else if ( n == 0){
			cout << 0 << endl;
		}
		else{
			if( n % 4 != 0) 
			cout << ceil (n/4) +1 <<endl;
			else
				cout << n/4 << endl;
	       }
      }
		
		
}
