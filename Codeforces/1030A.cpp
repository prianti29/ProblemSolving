//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
   /* int t,j,cnt=0;
    cin>>t;
    for(j=0;j<t;j++)
    {
        int i;
        cin>>i;
        if(i==1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;*/
    /* int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        int x;
        cin>>x;

        if (x==1) {
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;*/

//}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i=1; i<=n; i++) {
        int x;
        cin>>x;

        if (x==1) {
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
}
