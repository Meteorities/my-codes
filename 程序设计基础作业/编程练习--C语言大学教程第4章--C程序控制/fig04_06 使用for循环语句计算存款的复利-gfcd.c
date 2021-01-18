#include <stdio.h> //gfcd
#include <math.h>
int main(void)
{
	double amount,principal = 1000.0;
	int year;
	printf("%s%21s","Year","Amount on deposit");
	printf("\n");
	for (year = 1;year <= 10;year++) {
		amount = principal * pow(1.05,year);
		printf("%4d%21.3f\n",year,amount);
	}
	return 0;
}
