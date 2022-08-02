#include "bits/stdc++.h"
using namespace std;

int main()
{
	int a, b, c, d, e;
	string str = "ABCDE";
	while(cin >> a >> b >> c >> d >> e)
	{
		
			if(a == 1 || b == 1 || c == 1 || d == 1 || e == 1){
				cout << str[0];
				
			}
			 if(a == 2 || b == 2 || c == 2 || d == 2 || e == 2){
				cout << str[1];
			
			}
			 if(a == 3 || b == 3 || c == 3 || d == 3 || e == 3){
				cout << str[2];
			
			}
			 if(a == 4 || b == 4 || c == 4 || d == 4 || e == 4){
				cout << str[3];
			
			}
			 if(a == 5 || b == 5 || c == 5 || d == 5 || e == 5){
				cout << str[4];
				
			}
	}
	
}
