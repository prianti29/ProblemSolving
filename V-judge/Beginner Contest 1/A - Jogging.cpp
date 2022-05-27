
#include "bits/stdc++.h"
using namespace std;

int main()

{
	int  a, b, c, d, e, f, x;
	
	cin >> a >> b >> c >> d >> e >> f >> x;
	long long time = x;
	long long res_t = 0;
	for(int i = 0; i < time; i++){
		if(time < a){
			res_t += time * b;
			time = 0;
		} else {
			res_t += a * b;
			time -= a;
		}
		time -= c;
	}
	
	long long res_a = 0;
	time = x;
		for(int i = 0; i < time; i++){
		if(time < d){
			res_a += time * e;
			time = 0;
		} else {
			res_a += d * e;
			time -= d;
		}
		
		time -= f;
	}
	if(res_t > res_a){
		cout << "Takahashi" << endl;
		return 0;
	}if(res_t < res_a){
		cout << "Aoki" << endl;
		return 0;
	}else{
		cout << "Draw" << endl;
	}
	
}
