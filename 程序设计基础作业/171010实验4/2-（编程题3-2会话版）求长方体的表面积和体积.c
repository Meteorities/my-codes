#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c,sa,vol;
	printf("Input length, width and height of the cuboid:\n");
	scanf("%lf%lf%lf",& a,& b,& c);
	sa = (a * b + b * c + a * c) * 2;
	vol = a * b * c;
	printf("Surface area of the cuboid is: %.2f\nVolume of the cuboid is: %.2f\n",sa,vol);
	return 0;
}
