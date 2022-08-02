#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	while(cin >> n)
	{
		int ans = 0;
		if(n % 2 != 0){
			ans = (n * 4) + n + n + (n * 5);
			cout << "Secret Ingredients: " << ans << " ounce"<< endl;
		} else {
			ans = ((n * 4) + n + n + (n * 5)) * 2;
			cout << "Secret Ingredients: " << ans << " ounce"<< endl;
		}
	}
} 
