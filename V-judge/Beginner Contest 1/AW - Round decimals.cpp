
#include "bits/stdc++.h"
using namespace std;

int main()

{
	double n;
	cin >> n;
	
	if(n+.5 >= int(n+1))
	cout << int(n+1)<< endl;
	else
	cout << int(n) << endl;
}
