#include "bits/stdc++.h"
using namespace std;


int main()
{
	string str;
	while(cin >> str)
	{
		int n = str.size();
		
			if(str[n - 1] % 2 == 0){
				cout << "YES" << endl;
			} else {
				cout << "NO" << endl;
			}
		
	}
}
