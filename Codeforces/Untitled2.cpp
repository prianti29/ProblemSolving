#include<bits/stdc++.h>
using namespace std;
int main()
{
    //cout<<"NO";
    /*string str;
    int i,ans;
    cin>>str;
    i=str.size();
    ans=str[i-1]-'0';
    //for(i=0;i<str.size();i++)
      if(ans%2==0)
    //{
        cout<<"0";

    //}
    else{
        cout<<"1";
        //cout<<"1";

    }*/
    long long int i,j;
    cin>>i>>j;
    if(i%2==0&&j%2==0)
        cout<<"OUT"<<endl;

    else if(i%2!=0&&j%2==0)
        cout<<"IN"<<endl;

    else if(i%2==0&&j%2!=0)
        cout<<"OUT"<<endl;

    else if(i%2!=0&&j%2!=0)
        cout<<"IN"<<endl;
}
