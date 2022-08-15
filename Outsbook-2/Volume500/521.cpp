#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, cnt, gcd;
    while(cin >> a >> b)
    {
      cnt = a*b;
      gcd = __gcd(a,b);
      long long ans = cnt / gcd;
      cout << ans <<endl;
    }
}

