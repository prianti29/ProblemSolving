#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,e,i,j,cnt=0;
    cin>>a>>b>>c>>d>>e;
    for(i=1; i<=e; i++)
    {
        if(i%a==0)
            cnt++;
       else if(i%b==0)
            cnt++;
        else if(i%c==0)
            cnt++;
       else if(i%d==0)
            cnt++;

    }
    cout<<cnt<<endl;
}
/*

#include <stdio.h>


int main(){

	int k,l,m,n ;
	int d ;
	int total = 0 ;

	scanf("%d%d%d%d%d", &k,&l,&m,&n,&d) ;

	for(int i = 1 ; i <= d ; i++){
		if(i%k == 0){
			total++ ;
		}else if(i%l == 0){
			total++ ;
		}else if(i%m == 0){
			total++ ;
		}else if(i%n == 0){
			total++ ;
		}else{

		}
	}

	printf("%d\n", total) ;




}*/

