#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long n, k, suppose;
	while(cin >> n >> k >> suppose)
	{
		long long ans = 0;
		if(suppose == 1){
			ans = (n * k);
			cout << ans <<  " taka wins" << endl;
		} else{
			ans = n * k * 2;
			cout << ans <<  " taka lose" << endl;
		}
	}
}
