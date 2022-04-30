#include<bits/stdc++.h>
using namespace std;
#define all(v)   v.begin(),v.end()
#define meow ios::sync_with_stdio(0);cin.tie(0);

typedef long long int ll;
typedef unsigned long long int ull;

const double PI = acos(-1);

int main()
{
    ll t,i,j,a,b,cnt=0;
    ll cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    cin>>a;
    vector<long long>v;
    for(i=0;i<a;i++)
    {
        cin>>t;
        v.push_back(t);
        if(v[i]==1){
            cnt1++;
        }
        if(v[i]==2){
            cnt2++;
        }
        if(v[i]==3){
            cnt3++;
        }
        if(v[i]==4){
            cnt4++;
        }
        //else
          //  break;
    }
     //sort(v.begin(),v.end());
    cnt=cnt4;
    while(cnt1!=0&& cnt3!=0){
        cnt3=cnt3-1;
        cnt1=cnt1-1;
        cnt=cnt+1;
    }
    if(cnt1==0&&cnt3!=0){
        cnt=cnt+cnt3;
        cnt3=0;
    }
    cnt=cnt+cnt2/2;
    if(cnt2%2!=0){
        if(cnt1<=2){
            cnt=cnt+1;
            cnt2=0;
            cnt1=0;
        }
        else{
            cnt1=cnt1-2;
            cnt=cnt+1;
            cnt2=0;
        }
    }
    if(cnt1!=0){
        cnt=cnt+cnt1/4;
        if(cnt1%4!=0){
            cnt=cnt+1;
        }
    }
  cout<<cnt;
}
