//Bear and big brother
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i=0;
    cin>>a>>b;
    while(a<=b){
            i++;
        a=a*3;
        b=b*2;
    }
    cout<<i<<endl;
}
