#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l;
    cin>>i>>j>>k>>l;
    cout<<min(min(i,j),min(k,l))<<" "<<max(max(i,j),max(k,l))<<endl;
}
