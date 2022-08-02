
#include "bits/stdc++.h"
using namespace std;

int main()
{
	double m, p, x, y, z;
	char c; 
	while(cin >> m >> p >> c >> x >> y >> z)
	{
		//double save = 0, cost = 0, time = 0;
		double save, cost, time;
		save = m - (m * (p / 100));
		cost = x + y + z;
		time = cost / save;
		cout << fixed << setprecision(2) << "Monthly Save = " << save << endl;
		cout << fixed << setprecision(2) << "Total Cost = " << cost << endl;
		cout << fixed << setprecision(0) << "Minimum Time = " << ceil(time) << " Months"<< endl;
	}

}
