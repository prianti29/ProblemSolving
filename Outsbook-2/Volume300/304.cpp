#include "bits/stdc++.h"
#define mod 100
using namespace std;
int main()

{
	long long n;
	cin>>n;
	long long ans1 = n * 567;
	long long ans2 = ans1 - 357;
	long long ans3 = ans2 + 7492;
	long long ans4 = (ans3 % 100) * 9879;
	long long ans5 = (ans4 % 100) - 4787;
	long long ans6 = (ans5 % 100) * 7493;
	long long ans7 = (ans6 % 100) - 498;
	long long ans8 = (ans7 % 100) * 1237;
	long long ans9 = (ans8 % 100) + 100;
	long long ans10 = (ans9 % 100)* 9879;
	long long ans11 = ans10 - 9;
	 ostringstream os;
    os << fixed << setprecision(0) << ans11;
    std::string str = os.str();
    cout << str[str.size()-2] << str[str.size()-1] <<endl;

	
	
}
