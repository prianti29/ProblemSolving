#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long x, n;
	long long counter = 1;
	while(cin >> x >> n)
	{
		
		cout << "Case " << counter << ":" << endl;
		if(n == 0){
			cout << x << " X " << n << " = " << x * n << endl;
			
		} else  {
				for(int i = 1; i <= n; i++){
				
				cout << x << " X " << i << " = " << x * i << endl;
				
				
			}
		}
		counter++;
		
	}
}
