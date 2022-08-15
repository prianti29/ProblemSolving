#include "bits/stdc++.h"
using namespace std;
 
int main()
{
	int x, y;
	while(cin >> x >> y)
	{
 
		if( x >= 10 && x <= 19 && y >= 10 && y <= 19){
			if(x == y){
				cout << x * y * 10 << endl;
		    } else {
				cout << x + y + 10 << endl;
			}
		}
 
		else if( x >= 20 && x <= 49 && y >= 20 && y <= 49){
			if(x == y){
				cout << x * y * 25 << endl;
		    } else {
				cout << x + y + 25 << endl;
			}
		}
		else if( x >= 50 && x <= 100 && y >= 50 && y <= 100){
			if(x == y){
				cout << x * y * 55 << endl;
		    } else {
				cout << x + y + 55 << endl;
			}
		}
		else if(x==y){
			cout << x*y << endl;
		}
		else {
			cout<<x+y<<endl;
		}
	}
}
