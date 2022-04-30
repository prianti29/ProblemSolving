/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        int str1=str.size();
        if(str1>10){
            cout<<str[0]<<str1-2<<str[str1-1]<<endl;
        }
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        int str1=str.size();
        if(str1>10){
            cout<<str[0]<<str1-2<<str[str1-1]<<endl;
        }
        else{
                cout<<str<<endl;
        }
    }
}
