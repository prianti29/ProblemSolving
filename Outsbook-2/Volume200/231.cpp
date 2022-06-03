#include "bits/stdc++.h"
using namespace std;

int main()
{
	int W, L, w, l;
	cin >> L >> W >> l >> w;
    int ans = L * W;
    int ans1 = (L - (2 * l)) * (W - (2 * w));
    cout << ans - ans1 - (4 * l * w);
}
