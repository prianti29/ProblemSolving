#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long i,t,n,p;
    cin>>t;
    cin.ignore();
    cin>>str;
    cin>>n;
    // transform(str.begin(),str.end(),str.begin(),:: tolower);
    for(i=0; i<str.size(); i++)
    {
    	n=n%26;
        if(str[i]>='a'&&str[i]<='z')
        {
        	p=(int)str[i]+n;
        	if(p>'z')
            {
            	p=(p%122)+96;
    			str[i]=(char)(p);
			}
			else
			{
				str[i]=(char)(p);
			}
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            p=(int)str[i]+n;
            if(p>'Z')
            {
    			p=(p%90)+64;
    			str[i]=(char)(p);
			}
			else
			{
				str[i]=(char)(p);
			}
        }
    }
    cout<<str<<endl;
}
