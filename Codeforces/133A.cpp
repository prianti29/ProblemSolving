#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
        {
            cout<<"YES";
            //break;
            return 0;
        }
          cout<<"NO";
         // break;

    }
  return 0;
}
