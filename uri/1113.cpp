
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        if(x==y){
            break;
        }
        else{
            if(x<y){
                cout<<"crescente"<<endl;
            }
            else{
                cout<<"Decrescente"<<endl;
            }
        }
    }
}

