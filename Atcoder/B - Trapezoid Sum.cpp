
#include "bits/stdc++.h"
using namespace std;

int main()

{
	 long long t, a, b;
	 long long sum = 0;
	 cin>> t;
     	 
	 while(t--){
		 cin >> a >> b;
		 sum += ((a+b)*((b-a)+1))/2;
	 }cout << sum << endl;
}
