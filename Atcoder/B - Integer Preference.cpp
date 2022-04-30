#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
    if((d >= a && d <= b)||(c >= a && c <= b)||(a >= c && a <= d)||(b >= c && b <= d))
    cout<<"Yes"<<endl;
	else 
	cout<<"No"<<endl;
}
