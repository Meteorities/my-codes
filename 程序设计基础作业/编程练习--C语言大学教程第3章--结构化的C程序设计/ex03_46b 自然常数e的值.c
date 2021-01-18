#include<stdio.h>  
  
int main(void){  
   int i,j,b=1;  
   float d=1;   
   for(i=1;i<=10;i++){  
    for(j=1;j<=i;j++){  
       b*=j;  
    }  
    d+=1.00/b;  
    b=1;  
   }  
   printf("e is %.6f\n",d);  
  
   return 0;  
}  
