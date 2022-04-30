#include "bits/stdc++.h"
using namespace std;


int main()  
{
	int k;
	vector<long long>v;
	for(int i=0; i<3; i++)    {
    	cin>>k;
    	v.push_back(k);
	}
	//cout<<v.size()<<endl;
	sort(v.begin(),v.end());
	int ans1 = v[2] - v[1];
	int ans2 = v[1] - v[0];
	cout << ans1 + ans2 << endl;
  }

