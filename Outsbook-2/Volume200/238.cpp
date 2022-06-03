#include "bits/stdc++.h"
using namespace std;

int main()
{
	 long long s, n;
	cin >> s >> n;
	 long long priyom = (s - n) / 4;
	 long long priyonti = priyom * 2;
	 long long odry = priyom + n;
	cout<<"Priyom: " << priyom << "Kg." <<endl;
    cout<<"Priyonti: " << priyonti <<"Kg." <<endl;
    cout<<"Odry: " << odry << "Kg." <<endl;
	
}
