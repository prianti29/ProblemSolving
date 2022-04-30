#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0){
        int i=0,j=1,c=1;
        while(n--){
            c=i+j;
            i=j;
            j=c;
        }
        cout<<c<<endl;
    }
}
