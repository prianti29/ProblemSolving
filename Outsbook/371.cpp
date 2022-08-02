#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,i,j,k;
    while(cin>>a>>b>>c)
    {
		if(a + b <= c || a + c <= b || b + c <= a){
			i=(a+b+c)/2;
        j=sqrt(i*((i-a)*(i-b)*(i-c)));
        cout<<setprecision(2)<<fixed<<j<<endl;
		} else {
			cout << "0.00" << endl;
		}
        
    }
}
