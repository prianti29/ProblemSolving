#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n[12][12];
    char p;
    double s=0.0;
    int i,j;
    cin>>p;
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(j>(11-i)&&j>i){
                s=s+n[i][j];
            }
        }

    }
    if(p=='S')
        cout<<setprecision(1)<<s<<endl;
    else
        cout<<setprecision(1)<<s/30.0<<endl;
}
