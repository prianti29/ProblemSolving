#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,student;
    while(cin>>t>>m)
    {
        if(t==0||t==1)
    	{
        	student=0;
        	cout<<student<<endl;
    	}
    	else
    	{
        	student=(t-1)%m;
        	if(student==0)
            	cout<<m<<endl;
        	else
            	cout<<student<<endl;
    	}
    }
    return 0;
}
