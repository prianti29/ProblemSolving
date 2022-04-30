#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    float a, b, c;
    cin >> n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        printf("%.1f",(a*2 + b*3 + c*5)/10.0);
    }
}
