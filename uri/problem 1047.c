#include<stdio.h>
int main()
{
    int start_hr,end_hr,start_min,end_min,duration_hr,duration_min;
    scanf("%d %d %d %d",&start_hr,&end_hr,&start_min,&start_min);
    duration_hr=end_hr-start_hr;
    duration_min=end_min-start_min;
    if(duration_hr<0)
    {
        duration_hr=24+(end_hr-start_hr);
    }
    if(duration_min<0)
    {
        duration_min=60+(end_min-start_min);

    }
    if(start_hr==end_hr&&start_min==end_min)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(s) E %d MINUTO(S)\n",duration_hr,duration_min);
        return 0;
    }
}
