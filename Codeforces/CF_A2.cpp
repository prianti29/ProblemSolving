//anton and danik
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a=0,d=0;
    //string ch;
    cin>>n;
    char ch[n];
   // cin>>j;
    for(i=0;i<n;i++){
            cin>>ch[i];
        if(ch[i]=='A')
        a++;
    else
        d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(d>a)
        cout<<"Danik"<<endl;
    else if(a==d)
        cout<<"Friendship"<<endl;
}
