#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c,sa,vol;
	scanf("%lf%lf%lf",& a,& b,& c);
	sa = (a * b + b * c + a * c) * 2;
	vol = a * b * c;
	printf("%.2f\n%.2f\n",sa,vol);
	return 0;
}
