#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;
int main()
{
    string a,str,str1,str2;
    long long i;
    cin>>a;
    cin.ignore();
    getline(cin,str);
    // string l=str.size();
    //for(i=0;i<str.size();i++)
    transform(str.begin(),str.end(),str.begin(),:: tolower);
    //cout<<str;
    sort(str.begin(),str.end());
    long long j=0;
    // cin>>str1;
    str2="abcdefghijklmnopqrstuvwxyz";
    for(i=0; i<str.size(); i++)
    {
        if(str[i]==str2[j])
            j++;
    }
    if(j>=26)
    {
        cout<<"pangram"<<endl;
    }
//else if(j==str2.size())
    else
        cout<<"not pangram"<<endl;
    // else
}
