#include "bits/stdc++.h"
using namespace std;

int main()
{
	int a1, b1, c1, a2, b2, c2;
	while(cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2)
	{
		int A = 0, B = 0, C = 0;
		A = a1 / a2;
		B = b1 / b2;
		C = c1 / c2;
		if(A == B && B == C && C == A){
			cout << "The lines are parallel." << endl;
		} else {
			cout << "The lines are not parallel." << endl;
		}
	}
}
