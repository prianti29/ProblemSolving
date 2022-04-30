#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,j,k,p,a;
    cin>>i>>j>>k;
    if(i<(j+k)&&j<(i+k)&&k<(i+j))
    {
        p=i+j+k;
        cout<<"Perimetro"<<" "<<"="<<" "<<p<<endl;
    }
    else{
            a=k*(i+j)/2;
     cout<<"Area"<<" "<<"="<<<<" "<<setprecision(.1)a<<endl;
    }

}
