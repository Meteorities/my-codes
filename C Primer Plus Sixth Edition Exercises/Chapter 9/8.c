#include <stdio.h>

double power(double n, int p);

int main(void)
{
    double x, xpow;
    int exp;
    printf("Enter an integer number and the integer power");
    printf(" to which the number will be raised.\nEnter q");
    printf(" to quit.\n");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x,exp);   // function call
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Done.\n");
    return 0;
}

double power(double n, int p)  // function definition
{
    double pow = 1;
    int i; 
    
    if (n == 0 && p != 0) {  //0的非零次幂 
    	pow = 0;
	} 
	else if (n == 0 && p == 0) {  //0的零次幂 
		printf("0的0次幂未定义。\n");	
		pow = 1;
	}
	else if (p >= 0){  //任意整数的正数幂 
	    for (i = 1; i <= p; i++) {
	        pow *= n;
		}	
	}
	else {  //任意整数的负数幂 
		for (i = 1;i <= (-p);i++) {
			pow *= n;
		} 
		pow = 1 / pow;
	}
    
    return pow;                // return the value of pow
}
