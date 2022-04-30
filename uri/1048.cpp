#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,sal=0,newsal=0;
    cin>>a;
    if(a>=0&&a<=400.00){
        sal=(a*15)/100;
        newsal=a+sal;
        cout<<"Novo salario:"<<" "<<fixed<<setprecision(2)<<newsal<<endl;
        cout<<"Reajuste ganho:"<<" "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Em percentual:"<<" "<<"15%"<<endl;
    }
    else if(a>=400.01&&a<=800.00){
        sal=(a*12)/100;
        newsal=a+sal;
        cout<<"Novo salario:"<<" "<<fixed<<setprecision(2)<<newsal<<endl;
        cout<<"Reajuste ganho:"<<" "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Em percentual:"<<" "<<"12%"<<endl;
    }
     else if(a>=800.01&&a<=1200.00){
        sal=(a*10)/100;
        newsal=a+sal;
        cout<<"Novo salario:"<<" "<<fixed<<setprecision(2)<<newsal<<endl;
        cout<<"Reajuste ganho:"<<" "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Em percentual:"<<" "<<"10%"<<endl;
    }
     else if(a>=1200.01&&a<=2000.00){
        sal=(a*7)/100;
        newsal=a+sal;
        cout<<"Novo salario:"<<" "<<fixed<<setprecision(2)<<newsal<<endl;
        cout<<"Reajuste ganho:"<<" "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Em percentual:"<<" "<<"7%"<<endl;
    }
     else if(a<=2000.00){
        sal=(a*4)/100;
        newsal=a+sal;
        cout<<"Novo salario:"<<" "<<fixed<<setprecision(2)<<newsal<<endl;
        cout<<"Reajuste ganho:"<<" "<<fixed<<setprecision(2)<<sal<<endl;
        cout<<"Em percentual:"<<" "<<"4%"<<endl;
    }
}

