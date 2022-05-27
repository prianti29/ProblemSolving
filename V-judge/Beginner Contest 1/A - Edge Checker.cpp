#include "bits/stdc++.h"

using namespace std;

int main()
{
	int a, b;
	 
	cin >> a >> b;
	
	int n = a - b;
	if(n == 1 || n == -1 || n == 9 || n == -9){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

}
