//petya and string
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i;
    string a,b;
    cin>>a>>b;
    for(i=0;i<a.size();i++){
        if('a'<=a[i]&&a[i]<='z'){
        }
                else{
                     a[i]+=32;
                }
        if('a'<=b[i]&&b[i]<='z'){
        }
        else{
            b[i]+=32;
        }
    }
    if(a==b)
        cout<<"0"<<endl;
    else if(a>b)
        cout<<"1"<<endl;
    else
        cout<<"-1"<<endl;

}
