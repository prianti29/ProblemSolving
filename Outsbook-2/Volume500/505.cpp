#include <iostream>  
using namespace std;  
int main()  
{  
	long long n,m;    
	while(cin >> n)  {
		long long sum=0;
		while(n > 0)    
		{    
			m = n % 10;    
			sum = sum + m;    
			n = n / 10;    
		}    
		cout << sum << endl;   
	}
	 
	return 0;  
}  
