
#include "bits/stdc++.h"
using namespace std;

int main()

{
	int n, d, x;
	int a, b;
	cin >> n >> d >> x;
	
	while(n--)
	{
		cin >> a >> b;
		
		if(a < d && b > x){
			cout << "Yes" << endl;
			//break;
			return 0;
		}
	}
	cout << "No" << endl;
	
	 
}
