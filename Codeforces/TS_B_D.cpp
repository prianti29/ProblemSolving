#include<bits/stdc++.h>
using namespace std;
int main(){
    int j,i,t,n;
    while( t--){
       int pos=0,neg=0,odd=0,even=0;
            cin>>j;
        for(i=1;i<=j;i++){
             cin>>n;
        if(n>=0){
            pos++;
        }
        else {
                if(n<0){
                neg++;
                }
        }
         if(n%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    }

}
