#include "bits/stdc++.h"
using namespace std;

int main()
{
	string s;
	vector<char>ch;
	cin>>s;
	bool valid = true;
	
	
	for(int i = 0; i < (int) s.size(); i++)
	{
		if(s[i] == '(' || s[i] == '{' || s[i] == '[')
		  ch.push_back(s[i]);
		else{
			if(ch.empty()){
				valid = false;
				
				//cout<< i << " yes1";
				break;
			}
			if(s[i] == ')' && ch.back() == '('){
				ch.pop_back();
			}
			else if(s[i] == '}' && ch.back() == '{'){
				ch.pop_back();
			}
			else if(s[i] == ']' && ch.back() == '['){
				ch.pop_back();
			}
			else{
				valid = false;
			//	cout<< "yes2";
				break;
			}
		}
	}
	 if (!ch.empty()) {
		 valid = false;
		// cout<< "yes3";
	 }
	 if(valid){
		 cout<< "Yes\n";
	 }else{
		 cout<< "NO\n";
	 }
 
}
