#include <iostream>  
using namespace std;  
int main()  
{  
	long long num;    
	while(cin >> num)  {
		long long reminder, result = 0, originalNum;
		originalNum = num;
		while(originalNum != 0){
			reminder = originalNum % 10;
			result += reminder * reminder * reminder;
			originalNum /= 10;
		}
		if(result == num){
			cout << num << " is an Armstrong Number" << endl;
		} else {
			cout << num << " is not an Armstrong Number" << endl;
		}
	}
	 
	return 0;  
}  
