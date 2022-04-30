#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,bin,t;

    cin>>t;
    while(t--){
    	string str;
        cin>>n;
        while(n!=0){
            bin=n%2;
            string k=to_string(bin);
            str+=k;
            n=n/2;
        }
        reverse(str.begin(),str.end());

        count(str.begin(),str.end(),'1');
        cout<<str<<endl;
	}
}
