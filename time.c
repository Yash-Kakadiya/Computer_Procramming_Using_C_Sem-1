#include<stdio.h>
#include<time.h>

void main()
{
    time_t t = time(NULL);
    printf("\n Current date and time is : %s", ctime(&t));
}
