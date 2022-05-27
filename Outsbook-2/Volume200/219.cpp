
#include "bits/stdc++.h"
using namespace std;

int main()

{
    int h, m, n;
    cin >> h >> m >> n;
    int ans = (m - n);
    int ans1 = h - m;
    int ans2 = ((ans1 * 2) / ans) + 1;
    cout << ans2 << endl; 
}
