#include <stdio.h>

void main(){
    float p, r, n, ans;

    printf("Enter Principle Amount : ");
    scanf("%f",&p);
    printf("Enter Rate of Interest : ");
    scanf("%f",&r);
    printf("Enter Period of Time in Months : ");
    scanf("%f",&n);

    ans=p*r*n/(100*12);
    printf("Simple Interest : %f",ans);

}
