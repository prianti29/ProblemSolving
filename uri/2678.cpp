#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int i;
    while(getline(cin,str)){
        for(i=0;i<str.length();i++){
            if(str[i]>=48&&str[i]<=57)
                cout<<str[i];
            if(str[i]>=97&&str[i]<=122)
            str[i]=str[i]-32;
            if(str[i]>=65&&str[i]<=90){
                char x=str[i]-32;
                int a=x-64;
                if(a<=18){
                    int d=a/3;
                    if(d==0)
                        cout<<2;
                    else{
                        if(a%3!=0)
                            cout<<a/3+2;
                            else
                                cout<<a/3+1;
                                            }
                }
                else{
                    if(str[i]=='s')
                        cout<<7;
                    else if(str[i]>='T'&&str[i]<='V')
                        cout<<8;
                    else
                    cout<<9;
                }
            }
            if(str[i]=='*'||str[i]=='#')
                cout<<str[i];
        }
        cout<<endl;
    }
}

