#include "bits/stdc++.h"
using namespace std;


int main()
{
	string str;
	bool won = true;
	cin>>str;

	for(int i = 0; i < (int)str.size()-1; i++){
		if(str[i] != str[i+1]){
			won = false;
			break;
		}
	}
	if(won){
		cout<< "Won" <<endl;
	}else{
		cout<< "Lost" <<endl;
	}
	

}
