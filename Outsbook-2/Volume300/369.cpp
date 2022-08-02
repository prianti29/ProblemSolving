#include "bits/stdc++.h"
using namespace std;

int main()
{
   int a, b;
   while(cin >> a >> b)
   {
	   int ans = 0, result = 0;
	   ans = a * b;
	   result = ans - (a + b);
	   cout << a << " * " << b << " = " << result << endl;
   }
}
