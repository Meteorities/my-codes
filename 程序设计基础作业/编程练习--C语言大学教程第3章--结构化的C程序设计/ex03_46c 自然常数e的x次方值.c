#include <stdio.h>  
#include <math.h>   
int main(void)  
{  
    int x;  
    double y;  
    scanf("%d", &x);  
    if (x > 0)  
    {  
       y = exp(x);  
    }  
    else if (x < 0)  
    {  
       y = exp(x);  
    }  
    else   
    {  
       printf("y==1\n");  
    }  
    printf("e raised to the 3 power is %.2f\n", y);  
}  
