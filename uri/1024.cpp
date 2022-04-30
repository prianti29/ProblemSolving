#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    int i,j,k,m,n,l,t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,str);
        for(i=0; i<str.size(); i++)
        {
            if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
                str[i]=str[i]+3;
        }
        reverse(str.begin(),str.end());
        k=str.size();
        for(i=k/2; i<=k; i++)
        {
            str[i]-=1;
        }
        cout<<str<<endl;
    }
}
/*4
Texto #3
abcABC1
vxpdylY .ph
vv.xwfxo.fd

3# rvzgV
1FECedc
ks. \n{frzx
gi.r{hyz-xx  */
