#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long a, b, k;
	
	cin >> a >> b >> k;
	long long cnt = a;
	
	if(a >= b){
		cout << "0\n";
		return 0;
	}
	for (int i = 1; ; i++){
		cnt = cnt * k ;
		if(cnt >= b){
			cout << i << endl;
			break;
		}
		
	}
}



// 1 4 2
//~ 0 1    2
//~ 1 1*2  2*2
