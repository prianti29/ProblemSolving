//problem 304


#include<bits/stdc++.h>
#define mod 100
using namespace std;
int main()
{
    long long a;
    cin>>a;
    long long s1=a*567;
    //cout<<s1<<endl;
    long  long s2=s1-357;
    //cout<<s2<<endl;
    long long s3=s2+7492;
    //cout<<s3<<endl;
    long long s4=(s3%mod)*9879;
    //cout<<s4<<endl;
    long long s5=s4-4787;
    //cout<<s5<<endl;
    long long s6=(s5%mod)*7493;
    // cout<<s6<<endl;
    long long s7=s6-498;
    //cout<<s7<<endl;
    long long  s8=(s7%mod)*1237;
    // cout<<s8<<endl;
    long long s9=s8+100;
    //cout<<s9<<endl;
    long long s10=(s9%mod)*9879;
    //cout<<s10<<endl;
    long long  s11=s10-9;
    
    ostringstream os;
    os << fixed<<setprecision(0)<<s11;
    std::string str = os.str();
    cout<<str[str.size()-2]<<str[str.size()-1]<<endl;
}
