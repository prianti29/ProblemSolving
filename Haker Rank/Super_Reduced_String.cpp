#include<bits/stdc++.h>
using namespace std;

#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()

typedef long long ll;
const double PI = acos(-1);

int main()
{
     int i;
     string str;
     cin>>str;
     for(i=1;i<=str.size();i++)
     {
         if(str[i]==str[i-1]){

             str.erase(i-1,2);
             i=0;

         }
     }
     if(str.size()==0)
         cout<<"Empty String"<<endl;
     else
         cout<<str<<endl;

    return 0;
}





