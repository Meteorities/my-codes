#include <stdio.h>
#include <math.h>

int main(void)
{
	double pi=3.14159;//有小数得定义成double 
	double a;
	double b;
	double c;
	double d; 
	printf("Input the circle radius:\n");
	scanf("%lf", & a); //注意%lf！ 
	b = a * 2;
	c = a * pi * 2;
	d = pi * a * a;
	printf("The diameter is %.2f\n", b); //注意%.2f！ 
	printf("The circumference is %.2f\n", c);
	printf("The area is %.2f\n", d);
	return 0;
}
