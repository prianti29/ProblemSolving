//Word
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,cap=0,low=0;
    string str;
    cin>>str;
    for(i=0;i<str.size();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
            cap++;
        else
            low++;
    }
    //cout<<low<<endl<<cap;
    if(cap>low){
        transform(str.begin(),str.end(),str.begin(),::toupper);
        cout<<str<<endl;
    }
    else{
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str<<endl;
    }
   // cout<<str<<endl;
}

