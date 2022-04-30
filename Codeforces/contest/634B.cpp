#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    long long int i,a,b,c=0,j;
    cin>>t;
    while(t--)
    {
        string str="abcdefghijklmnopqrstuvwxyz",str1;
        cin>>a>>b>>c;
        str1=str.substr(0,c);
        j=0;
        for(i=0; i<a; i++)
        {
            if(j==c)
            {
                j=0;
            }
            cout<<str1[j];
            j++;
        }
        cout<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,c=0;
    while(t--)
    {
        string str1="qwertyuioplkjhgfdsaxzcvbnm",str2;
        cin>>a>>b>>c;
        str2=str1.substr(0,c);
        long long j=0;

        for(int i=0; i<a; i++)
        {
            if(j==c)
            {
                j=0;
            }
            cout<<str1[j];
            j++;
        }
        cout<<endl;
    }

}

