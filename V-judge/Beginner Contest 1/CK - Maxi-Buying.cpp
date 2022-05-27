#include "bits/stdc++.h"
using namespace std;

int main()
{
	int n;
	int ans;
	float x = 1.08;
	cin >> n;

	ans = n * x;
	//cout << ans << endl;
	if(ans < 206){
		cout << "Yay!\n";
		return 0;
	}
	if(ans > 206){
		cout << ":(\n";
		return 0;
	}
	else{
		cout<< "so-so\n";
		return 0;
	}
}
