#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,cnt;
    string str,str1;
    cin>>str;
    long long m=str.size()/3;
    cnt=0;
    for(i=0; i<m; i++)
    {
        //cnt=0;
        str1+="SOS";
              /* else if(str[i+1]!='O')
                   cnt++;
               else if(str[i+2]!='S')
                   cnt++;*/
    }

    for( j=0;j<str.size();j++){
      if(str[j]!=str1[j])
            cnt++;
    }
    cout<<cnt;
}
