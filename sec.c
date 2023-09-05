#include <stdio.h>

void main()
{
long long int s,m,h,days,weeks,months,years,decades,century;
printf("Enter Seconds : ");
scanf("%lld",&s);
m=s/60;
s=s%60;

h=m/60;
m=m%60;

days=h/24;
h=h%24;

weeks=days/7;

months=days/30;
days=days%7;
days=days%30;

years=months/12;
months=months%12;

decades=years/10;
years=years%10;
//------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------
printf("%lld",decades);
printf(" decades, ");
printf("%lld",years);
printf(" years, ");
printf("%lld",months);
printf(" months, ");
printf("%lld",weeks);
printf(" weeks, ");
printf("%lld",days);
printf(" days, ");
printf(" %lld",h);
printf("hours, ");
printf("%lld",m);
printf("minutes, ");
printf("%lld",s);
printf("seconds");

}