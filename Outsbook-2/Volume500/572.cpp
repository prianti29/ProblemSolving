#include <bits/stdc++.h>
using namespace std;
int roman_decimal(string &str);  

int main() 
{
	    int t, counter = 1;
        string s;
        cin >> t;
        while(t--){
			cin >> s;
            cout << "Case "<< counter << ": " << roman_decimal(s) << endl; 
            counter++;
		}   
}

int roman_decimal(string &str)
{
   unordered_map<char,int> m;
   m['I'] = 1;
   m['V'] = 5;
   m['X'] = 10;
   m['L'] = 50;
   m['C'] = 100;
   m['D'] = 500;
   m['M'] = 1000;
   
   int answer = 0;
    for(int i=0;i<str.length();i++)
    {
        if(i+1<str.length() && m[str[i]]< m[str[i+1]])
        {
            answer += m[str[i+1]]- m[str[i]];
            i++;
            
        }
       else
       {
          answer += m[str[i]];
       }
    }
   return answer;
}
