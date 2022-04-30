#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    getline(cin,str);
   size_t found=str.find(92);
   str1=str.substr(0,found);
    cout<<str1;
}
