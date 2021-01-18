#include <stdio.h>
#include <math.h>
int main(void)
{
	double x,y;
	scanf("%lf",&x);
	if (x <= 0) //走switch的话因为有表达式而有点困难
	{
		y = 0;
	} 
	if (x > 0 && x <= 10)
	{
		y = x;
	}
	if (x > 10 && x <= 20)
	{
		y = 10;
	}
	if (x > 20 && x <= 40)
	{
		y = 20 - (0.5 * x);
	}
	if (x > 40)
	{
		y = x - 40;
	}
	printf("%.2f",y);
	return 0;
}
