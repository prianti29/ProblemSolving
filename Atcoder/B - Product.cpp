
#include "bits/stdc++.h"
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int multiplication = a*b;
	
	if(multiplication % 2 == 0){
		cout<< "Even" <<endl;
	}
	else{
		cout<< "Odd" <<endl;
	}
}
