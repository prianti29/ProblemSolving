#include<iostream>
using namespace std;
int main()
{

    int x,y,i,j,a[70][70];
    //  int a[x][x];
    // int b[y][y];
    while(cin>>x)
    {

        for(i=0; i<x; i++)
        {
            for(j=0; j<x; j++)
            {
                if(i == j && (i+j)!=(x-1))
                {
                    a[i][j]=1;
                }
                else   if((i+j)== (x-1))
                {
                    a[i][j]=2;
                }
                else
                {
                    a[i][j]=3;
                }
            }
        }
        for(i=0; i<x; i++)
        {
            for(j=0; j<x; j++)
            {
                cout<<a[i][j];

            }
            cout<<endl;
        }
    }
}

