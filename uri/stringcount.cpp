#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";

    cout << "Number of times 'e' appears : "
         << count(str.begin(), str.end(), 'e');

    return 0;
}
