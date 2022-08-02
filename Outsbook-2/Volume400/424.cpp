#include "bits/stdc++.h"
using namespace std;

int main()
{
	string str;
	while(cin >> str)
	{
		if(str[0] == '0'){
			cout << str[1] << " Hours " << str[3] << str[4] << " Minutes" << endl;
		} else if(str[3] == '0'){
			cout << str[0] << str[1] << " Hours " << str[4] << " Minutes" << endl;
		} else if(str[0] == '0' && str[1] == '0'){
			cout << str[3] << str[4] << " Minutes" << endl;
		} else if(str[3] == '0' && str[4] == ''){
			cout << str[0] << str[1] << " Hours" << endl;
		}
		else
		cout << str[0] << str[1] << " Hours " << str[3] << str[4] << " Minutes" << endl;
	}
}
