

#include "bits/stdc++.h"
using namespace std;

int main()
{
	int t;
	int a, b, multi;
	cin>>t;
	
	while (t--){
		cin>> a >> b;
		multi = b * 30;
		
		if( a >= multi)
		cout << "YES" << endl;
		else
		cout<< "NO" << endl;
	}
	
}


