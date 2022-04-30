#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long i,j,k;
    while(getline(cin,str))
    {
        long long cnt=0;
        for(i=0;i<str.size();i++){

        if(str[i]!=' ')
        {
            if(i%2==0)
            {
                cnt=1;
                putchar(toupper(str[i]));

            }
            else
            {
                cnt=0;
                putchar(tolower(str[i]));

            }
        }
        else
            cout<<" ";

        }
         cout<<endl;
    }

   // return 0;

}
