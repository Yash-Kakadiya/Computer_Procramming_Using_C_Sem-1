#include<stdio.h>

void main()
{
long long int s,m,h,days,months,years,decades,century;
printf("Enter Seconds : ");
scanf("%lld",&s);
m=s/60;
s=s%60;

h=m/60;
m=m%60;

days=h/24;
h=h%24;

months=days/30;
//days=days%30;

years=months/12;
//months=months%12;

//------------------------------------------------------------------------------------------
for (int i = 1; i<=years; i++)
{
    if((i%4==0 && i%100!=0)||i%400==0){
        days++;
        //printf("if statement runs");
    }
}
//------------------------------------------------------------------------------------------

months=days/30;
days=days%30;

years=months/12;
months=months%12;

decades=years/10;
years=years%10;

century=decades/10;
decades=decades%10;

printf("%lld",century);
printf(" century\n");

printf("%lld",decades);
printf(" decades\n");

printf("%lld",years);
printf(" years\n");

printf("%lld",months);
printf(" months\n");

printf("%lld",days);
printf(" days\n");

printf("%02lld",h);
printf(" hours\n");

printf("%02lld",m);
printf(" minutes\n");

printf("%02lld",s);
printf(" seconds");

}