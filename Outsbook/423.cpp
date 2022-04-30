#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str1[5],str2[5];
    int res;
    while(gets(str1,str2)){
        res= strcmp(str1,str2);

        if(res==0){
            cout<<"A = B"<<endl;
        }
        else{
            cout<<"A != B"<<endl;
        }
    }
}
