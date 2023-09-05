#include<stdio.h>

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
days=days%7;

months=weeks/4;
weeks=weeks%4;

years=months/12;
months=months%12;


//------------------------------------------------------------------------------------------
for (int i = 1; i<=years; i++)
{
    if((i%4==0 && i%100!=0)||i%400==0){
        days++;
         printf("if statement runs");
    }
}
//------------------------------------------------------------------------------------------

decades=years/10;
years=years%10;

century=decades/10;
decades=decades%10;

weeks=days/7;
days=days%7;

months=weeks/4;
weeks=weeks%4;

years=months/12;
months=months%12;

printf("%lld",century);
printf(" century, ");
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
printf(" %0.2lld",h);
printf("hours, ");
printf("%0.2lld",m);
printf("minutes, ");
printf("%0.2lld",s);
printf("seconds");

}