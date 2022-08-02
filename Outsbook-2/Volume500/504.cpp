
#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long f, l;
	while(cin >> f >> l)
	{
		long long sum = 0;
		
		for(int i = f; i <= l; i++){
			if(i % 2 == 0){
				//cout << i << endl;
				sum += i;
			}
		}
		cout << sum << endl;
	}
}
