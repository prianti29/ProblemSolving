#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x1,y1,x2,y2,x3,y3,x4,y4;
    long long dis1,dis2,dis3,dis4;
    double dia1,dia2;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
    {
        dis1=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        dis2=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
        dis3=sqrt(((x4-x3)*(x4-x3))+((y4-y3)*(y4-y3)));
        dis4=sqrt(((x1-x4)*(x1-x4))+((y1-y4)*(y1-y4)));
        dia1=floor(sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1))));
        dia2=floor(sqrt(((x4-x2)*(x4-x2))+((y4-y2)*(y4-y2))));
       // cout<<dis1<<" "<<dis2<<" "<<dis3<<" "<<dis4<<" "<<dia1<<" "<<dia2<<endl;


        if(dis1==dis3||dis2==dis4&&dia1==dia2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x1,y1,x2,y2,x3,y3,x4,y4;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
        if(x1==y2 && y1==x2 && (x3==x1 ||x3==y1) && (x4==x1||x4==y1) && (!(x3==x4)))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    }
}*/
