#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    long long cnt1=0,cnt2=0,i,j;
    cin>>str1>>str2;
    long long l1=str1.size();
    long long  l2=str2.size();

    if(l1!=l2){
        cout<<"NO"<<endl;
    }
    else{
        for(i=0;i<l1;i++){
            if(str1[i]=='1')
            cnt1=1;
            if(str2[i]=='1')
                cnt2=1;
        }
        if(cnt1==cnt2)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            }


}
