#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int num , rem, temp, dec = 0, b = 1;
    cin >> num;
    temp = num;
    while (temp)
    {
        rem = temp % 10;
        temp =  temp/10;
        dec+=rem*b;
        b=b*2;
    }
    cout << dec;
    return 0;
}
