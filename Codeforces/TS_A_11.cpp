#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    char c;
    cin>>a>>c>>b;
    if(a>b&&c=='>'||a<b&&c=='<'||a==b&&c=='='){
        cout<<"Right"<<endl;
    }
    else {
        cout<<"Wrong"<<endl;
    }
}
