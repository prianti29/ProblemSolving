//valid parenthesis ()()((()))
#include "bits/stdc++.h"
using namespace std;
 
int main () {

	 vector<char> str; 
	 string s;
	 cin >> s;
	 bool valid = true;
	 for (int i = 0; i < (int) s.size(); ++i) {
		 if (s[i] == '(') {
			 str.push_back(s[i]);
		 } 
		 else {
			 if (str.empty()) {
				 valid = false;
				 break;
			 }
 			 str.pop_back();
		 }
	 }
	 if (!str.empty()) {
		 valid = false;
	 }
	 cout << (valid ? "YES\n" : "NO\n");
}
