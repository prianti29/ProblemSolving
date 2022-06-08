#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n, i, j, k, sub, sum = 0;
	cin >> n;
	int temp = n;
	while(n != 0){
		i = n % 10;
		j = j * 10 + i;
		n /= 10;
	}
	sub = abs(temp - j);
	
	 while( sub!=0 ){
        k = sub%10;
        sum = sum + k;
        sub = sub / 10;
    }
	cout << sum << endl;
	
}
