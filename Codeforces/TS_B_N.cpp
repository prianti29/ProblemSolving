#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long num,t;
	cin>>t;
	while(t--){
        cin >> num;
	int s=0;
	while (num > 0)
	{
		s=s+(num%10);
		s=s*10;
		num=num/10;
	}
	s=s/10;
	while (s!=0)
	{
		cout<<s%10<<" ";
		s=s/10;
	}
	cout<<endl;
	}

}
