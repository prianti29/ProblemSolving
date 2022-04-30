#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,h,t,m,f,i;
    cin>>a>>b>>c>>d;
    /* t=c-a;
      if(t<=0)
      {
          t=24+(c-a);
      }
      m=d-b;
      if(m<0)
      {
          m=60+(d-b);
          t--;
      }
      if (a==c && b==d)
      {
          cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
      }
      else
      {
          cout<<"O JOGO DUROU "<<t<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
      }
      return 0;*/
    a=a*60;
      c=c*60;
      i=a+b;
     f=c+d;
     t=f-i;
    if(f<=i)
    {
        t=t+(24*60);
        h=(int)t/60;
        m=t%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else{
            h=(int)t/60;
    m=t%60;
    printf("O JOGO DUROU &d HORA(S) E %d MINUTO(S)\n",h,m);

    }
}
