#include<bits/stdc++.h>
using namespace std;



int main()
{
    string str;
    string res;

    cin>>str;
    for(int i=0; i < str.size(); i++)
    {
        if ( !res.empty() && res.back() == str[i])
        {
            res.pop_back();
        }
        else
        {
            res.push_back(str[i]);
        }
    }

        cout << res << ' ';


}
