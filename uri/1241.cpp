#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    	string str1;
    	string str2;
    	cin>>str1>>str2;
    	int a=str1.size();
    	int b=str2.size();
    	int d,x,j;
    	if(b>a)
    	{
        	cout<<"nao encaixa"<<endl;
    	}
    	else
    	{
        	d=a-b;
        	j=0;
        	for(int i=d;i<a;i++)
        	{
                if(str1[i]==str2[j])
                {
                    x=1;
                    j++;
                }
        		else
        		{
            		x=0;
            		break;
        		}
        	}
            if( x==1)
            {
            	cout<<"encaixa"<<endl;
        	}
        	else
        	{
            	cout<<"nao encaixa"<<endl;
        	}
    	}
    }
}









