#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,n,total;
    char str[100];
    cin>>n;
    while(n--){
        cin>>str;
        len=strlen(str);
        for(i=0,total=0;i<len;i++){
            if(str[i]=='0')
                total=total+6;
            else if(str[i]=='1')
                total=total+2;
               else if(str[i]=='2')
                total=total+3;
                   else if(str[i]=='4')
                total=total+4;
                   else if(str[i]=='5')
                total=total+5;
                   else if(str[i]=='6')
                total=total+6;
                   else if(str[i]=='7')
                total=total+3;
                   else if(str[i]=='8')
                total=total+7;
                   else if(str[i]=='9')
                total=total+6;
            }
            cout<<total<<" "<<"leds"<<endl;
    }
    return 0;
}
