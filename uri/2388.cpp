#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n,i,result=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>m>>n;
        result=result+(m*n);
    }
    cout<<result<<endl;
}

/*#include <stdio.h>

int main(){

    int n, i, t, v, result = 0;

    scanf("%i", &n);
    for (i = 0; i < n; i++){
        scanf("%i %i", &t, &v);
        result = result + (t * v);
    }
    printf("%i\n", result);

    return 0;
}
*/

