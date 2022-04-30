#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;
    if(n<0||n>100){
        cout<<"Fora de intervalo";
    }else{
          if(n>=0&&n<=25){
        cout<<"Intervalo [0,25]";
    }
    else if(n>25&&n<=50){
        cout<<"Intervalo (25,50]";
    }
    else if(n>50&&n<=70){
        cout<<"Intervalo (50,75]";
    }
    else
        cout<<"Intervalo (75,100]";
}
}
