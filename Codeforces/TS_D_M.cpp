#include <bits/stdc++.h>
using namespace std;
int main() {
	string str,str1,str2;
	long long int i;
	cin>>str;
	str1=str;
	sort(str.begin(),str.end());
	char ch=str[0];
	int c=0;
	for(i=0;i<str.size();i++)
    {
        if(str[i]==ch && c==0)
        {
            str2+=str[i];
            c++;
        }
        else if(str[i]!=ch)
        {
            ch=str[i];
            c=0;
            i=i-1;
        }
    }
    for(i=0;i<str2.size();i++)
    {
        int cnt=count(str1.begin(),str1.end(),str2[i]);
        cout<<str2[i]<<" : "<<cnt<<endl;
    }

	return 0;
}
