#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a[100000],f0,f1,f2,f3,n;
    cin>>t;
    while(t--)
    {
        f0=f1=f2=f3=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                f0++;
            }
            else if(a[i]==1){
                f1++;
            }
            else if(a[i]==-1){
                f2++;
            }
            else{
                f3++;
            }
        }
        if(f3>1)
            cout<<"no"<<endl;
        else{
            if(f3&&f2)
                cout<<"no"<<endl;
            else if(f2>1&&f1)
                cout<<"no"<<endl;
            else
                cout<<"yes"<<endl;
        }
    }
}
