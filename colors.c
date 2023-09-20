#include <stdio.h>

void main(){

    float r,g,b,w,black,c=0,m=0,y=0,k;
    printf("Enter scale from 0 to 255 for Red : ");
    scanf("%f",&r);
    printf("Enter scale from 0 to 255 for Green : ");
    scanf("%f",&g);
    printf("Enter scale from 0 to 255 for Blue : ");
    scanf("%f",&b);

    r/=255;
    g/=255;
    b/=255;
    
    if(r==0&&g==0&&b==0){
        printf("Value of K is 1\n");
    }
    else{
        w=((r>g)?((r>b)?r:b):((g>b)?g:b));
    c=(w-r)/w;
    m=(w-g)/w;
    y=(w-b)/w;
    black=1-w;
    }
    printf("Value of White is %f\n",w);
    printf("Value of Cyan is %f\n",c);
    printf("Value of Megenta is %f\n",m);
    printf("Value of Yellow is %f\n",y);
    printf("Value of Black is %f",black);


}