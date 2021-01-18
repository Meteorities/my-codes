#include <stdio.h>
#include <math.h>
int main(void)
{
	double pi = 3.14,r,area,circ;
	scanf("%lf",& r);
	area = pi * r * r;
	circ = 2 * pi * r;
	printf("%.2f\n%.2f\n",area,circ);
	return 0;
} 
