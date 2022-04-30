
#include "bits/stdc++.h"
using namespace std;


		 int main()
		 {
			  string str;
			 // bool valid = true;
			   
			  //  bool valid1 = true;
			  int t, n;
			  cin >> t;
			  while( t-- ){
				  int cnt1 = 0, cnt0 = 0;
				  cin>> n;
				  cin>> str;
				  for( int i = 0 ;  i < n ; i++ ){
					if(str[i] == '1'){
						cnt0++;
					}	
					if(i != n-1 && str[i] == str[i+1]  && str[i] == '1' ){
						cnt1++;
					}
				  }
				  
				  if(cnt0 == 0){
					  cout<< "0" << endl;
				  }
				  else if(cnt1 == 0){
					  cout << "1" << endl;
				  }
				  else{
					  cout<< "2" << endl;
				  }
				  
			  }
		
			
		 }
	 
			 
	
