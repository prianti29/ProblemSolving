#include<bits/stdc++.h>
using namespace std;
int main()
{
  /*  long long n,n1,rem,result;
    while(cin>>n)
    {
        result=0;
        n1=n;
        while(n1!=0)
        {
            rem=n1%10;
            result+=rem*rem*rem;
            n1/=10;
        }
        if(result==n)

            cout<<n<<" is an Armstrong Number"<<endl;

        else

            cout<<n<<" is not an Armstrong Number"<<endl;
    }*/
    int num,Num1, rem, n = 0, result = 0, power;
    cin>>num;
    Num1 = num;
    while (Num1 != 0) {
        Num1 /= 10;
        ++n;
    }
   Num1= num;
    while (Num1 != 0) {
        rem = Num1 % 10;
        power = round(pow(rem, n));
        result += power;
        Num1 /= 10;
    }
    if (result==num)
      cout<<num<<" is an Armstrong number"<<endl;
    else
      cout<<num<<" is not an Armstrong number"<<endl;
}
