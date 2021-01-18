#include <stdio.h> //gfcd-gai
#include <math.h>
int main(void)
{
	double amount,principal = 1000.0,rate; //rateÀàĞÎÎªdouble£¡ 
	int year;
	for (rate = 0.05;rate <= 0.10;rate += 0.01) {
		printf("Interest Rate: %.6f\n",rate);
		printf("%s%21s","Year","Amount on deposit");
		printf("\n");
		for (year = 1;year <= 10;year++) {
			amount = principal * pow((1 + rate),year);
			printf("%4d%21.3f\n",year,amount);
		}
		printf("\n");
	}
	return 0;
}
