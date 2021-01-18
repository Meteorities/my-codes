#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c,s,transfer,area;
	printf("Enter the length of the three edges of the triangle: \n");
	scanf("%lf%lf%lf",&a,&b,&c);
	s = (a + b + c) / 2;
	transfer = s * (s - a) * (s - b) * (s - c);
	area = sqrt(transfer);
	printf("Area of the triangle is: %.2f\n",area);
	return 0;
}
