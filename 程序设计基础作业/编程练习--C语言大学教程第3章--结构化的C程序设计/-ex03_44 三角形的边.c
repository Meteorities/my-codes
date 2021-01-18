#include <stdio.h>
#include <math.h>
int main(void)
{
	double a = 0,b = 0,c = 0;
	printf("Enter three positive numbers:\n");
	scanf("%lf%lf%lf",& a,& b,& c);
	if (a + b > c && a - b < c) {
		printf("The three integers could be the sides of a triangle\n");
	}
	else if (a + c > b && a - c < b) {
		printf("The three integers could be the sides of a triangle\n");
	}
	else if (b + c > a && b - c < a) {
		printf("The three integers could be the sides of a triangle\n");
	}
	else {
		printf("The three numbers cannot be the sides of a triangle\n");
	}
	return 0;
}
