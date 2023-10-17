#include<stdio.h> 
 void main(){ 
         int n,same=1,i,x=0; 
  
         printf("How Many Numbers you will Enter : "); 
         scanf("%d",&n); 
  
         int a[n]; 
  
         for(i=0;i<n;i++){         
                 printf("Enter Number for a[%d] :",i); 
                 scanf("%d",&a[i]); 
         } 
         printf("--------------------------------\n"); 
         for(i=0;i<n-1;i++){ 
  
                 if(a[i]>a[i+1]){ 
                         x=1; 
                         break; 
                 } 
         } 
  
         for(i=0;i<n-1;i++){ 
  
                 if(x!=1){ 
                         if(a[i]==a[i+1]){ 
                                 same++; 
                         } 
  
                         else if(same>=3){ 
                                 same=1; 
                         } 
                         else{ 
                                 break; 
                         } 
                 }
                 else {
                     break;
                 }
  
         } 
                 if(same>=3){ 
                         printf("Yes"); 
                 } 
                 else{ 
                         printf("No"); 
                 } 
  
 }        