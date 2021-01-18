#include <stdio.h> //gfcd+zixie
#include <math.h>
double dealwithfunction(int number) {
	int outsum,outzs,outxs;
	outzs = number / 100;
	outxs = number % 100;
	outsum = outzs + outxs;
	return outsum;
}
int main(void)
{
	double dealwithfunction(int number);
	double amount;
	int year,principal;
	principal = dealwithfunction(100000);
	printf("%s%21s","Year","Amount on deposit");
	printf("\n");
	for (year = 1;year <= 10;year++) {
		amount = principal * pow(1.05,year);
		printf("%4d%21.2f\n",year,amount);
	}
	return 0;
}
