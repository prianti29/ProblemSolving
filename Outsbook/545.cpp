#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4==0){
            if(n%100==0){
                if(n%400==0)
                    cout<<"Leap year"<<endl;
                else
                    cout<<"Ordinary year"<<endl;
            }
            else
                cout<<"Leap year"<<endl;
        }
        else
            cout<<"Ordinary year"<<endl;
    }

}
