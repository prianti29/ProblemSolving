#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,pos=0,neg=0,odd=0,even=0;
    for(i=1;i<=5;i++){
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
    cout<<pos<<"valor(es) par(es)"<<endl;
    cout<<neg<<"valor(es) impar(es)"<<endl;
    cout<<even<<"valor(es) positivo(s)"<<endl;
    cout<<odd<<"valor(es) negativo(s)"<<endl;
}
