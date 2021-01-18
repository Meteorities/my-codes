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
    
    if (n == 0 && p != 0) {  //0�ķ������ 
    	pow = 0;
	} 
	else if (n == 0 && p == 0) {  //0������� 
		printf("0��0����δ���塣\n");	
		pow = 1;
	}
	else if (p >= 0){  //���������������� 
	    for (i = 1; i <= p; i++) {
	        pow *= n;
		}	
	}
	else {  //���������ĸ����� 
		for (i = 1;i <= (-p);i++) {
			pow *= n;
		} 
		pow = 1 / pow;
	}
    
    return pow;                // return the value of pow
}
