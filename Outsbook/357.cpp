#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    double a,b,c,d;
    double ans1,ans2;
    while(cin>>a>>ch>>b>>c>>ch>>d){
        ans1=a/b;
        ans2=c/d;
        if(ans1>ans2)
            cout<<"Red"<<endl;
        else if(ans1<ans2)
            cout<<"Green"<<endl;
        else
            cout<<"Equal"<<endl;
    }
}
