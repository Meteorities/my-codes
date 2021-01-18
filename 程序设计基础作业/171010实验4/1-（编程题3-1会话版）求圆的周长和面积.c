#include <stdio.h>
#include <math.h>
int main(void)
{
	double pi = 3.14,r,area,circ;
	printf("Input radius:\n");
	scanf("%lf",& r);
	area = pi * r * r;
	circ = 2 * pi * r;
	printf("Area of the circle is: %.2f\nCircumference of the circle is: %.2f\n",area,circ);
	return 0;
} 
