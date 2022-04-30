#include "bits/stdc++.h"
using namespace std;

int main()
{
	long long t, cnt = 0;
	long long arr1[100001], arr2[100001];
	cin >> t;
	for (int i = 0; i < t; i++)
	{
       cin >> arr1[i];
	   
	}for (int i = 0; i < t; i++){
		cin >> arr2[i];
		
		cnt += arr1[i] * arr2[i];
	}
	//cnt += arr1[i] * arr2[i];
	//cout << cnt << endl;
	if(cnt == 0) cout << "Yes" << endl;
	else cout << "No" << endl; 
}
