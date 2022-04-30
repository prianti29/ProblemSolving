#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    while(x!=0||y!=0)
    {
          if(x==0||y==0){
        break;
    }
        if(x>0&&y>0){
            cout<<"primeiro"<<endl;
        }
         else if(x<0&&y>0){
            cout<<"segundo"<<endl;
        }
         else if(x<0&&y<0){
            cout<<"quarto"<<endl;
        }
         else if(x>0&&y<0){
            cout<<"terceiro"<<endl;
        }
    }
     if(x==0||y==0){
        return 0;
    }
}
