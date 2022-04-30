
#include "bits/stdc++.h"
using namespace std;

int main()
{
	int a;
	cin>>a;
	
	if( a < 1200 && a != -1){
		cout << "ABC" <<endl;
	}
	else if( a >= 1200 && a < 2800 ){
		cout<< "ARC" << endl;
	}
	else{
		cout<< "AGC" << endl;
	}
}
