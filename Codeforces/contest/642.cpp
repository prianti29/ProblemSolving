#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define PB push_back
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    ll t,j,i,a,b,sum=0;
    cin>>t;
    while(t--)
    {
       /* cin>>a>>b;
        if(a==1)
            cout<<"0"<<endl;
        else if(a>2)
            cout<<b*2<<endl;
        else
            cout<<b<<endl;*/
            cin>>a>>b;
            long long arr[a],arr1[a];
            for(i=0;i<a;i++)
            {
                cin>>arr[i];
            }
            for(i=0;i<a;i++)
            {
                cin>>arr1[i];
            }
             sort(arr,arr+a);
             sort(arr1,arr1+a);
             reverse(arr1,arr1+a);
             for(j=0;j<b;j++)
             {
                 if(arr[j]<arr1[j])
                    swap(arr[j],arr1[j]);

             }
             for(i=0;i<a;i++){
                  sum +=arr1[i];
             }

             cout<<sum<<endl;

    }

}
