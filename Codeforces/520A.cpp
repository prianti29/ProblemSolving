
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
    //transform every letter into lower case
    transform(str.begin(),str.end(),str.begin(),:: tolower);
    //cout<<str;
    // sorted the string serially
    sort(str.begin(),str.end());

    long long j=0;
    // cin>>str1;
    // arekta string er a-z porjonto rakhsi jate easily check korte pari
    str2="abcdefghijklmnopqrstuvwxyz";
    //ekhane check korsi given string e a-z pornjonto sob gulo latter ache kina
    for(i=0; i<str.size(); i++)
    {
        if(str[i]==str2[j])
            j++;
    }
    // j er man 26 mane sob letter ache ar er besi holeo to sob letter obossoi ache tai yes
    if(j>=26)
    {
        cout<<"YES"<<endl;

    }
//else if(j==str2.size())
    else
        cout<<"NO"<<endl;
    // else
}
