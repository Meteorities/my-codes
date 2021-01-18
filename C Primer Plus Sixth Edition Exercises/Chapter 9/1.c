#include <stdio.h>
double min(double a,double b);

int main(void)
{
	double result = 0.00;
	double a = 0.00;
	double b = 0.00;
	printf("Please enter two numbers in double type:\n");
	scanf("%lf %lf",&a,&b);
	result = min(a,b);
	printf("The smaller of two double values is %f\n",result);
	return 0;
}

double min(double a,double b) {
	double linshi = 0.00;
	if (a > b) {
		linshi = a;
		a = b;
		b = linshi;
	}
	return a;
}



