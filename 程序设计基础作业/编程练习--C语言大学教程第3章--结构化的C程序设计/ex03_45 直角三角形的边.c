#include <stdio.h>
#include <math.h>
int main(void)
{
	int a = 0,b = 0,c = 0,ex = 0,aq = 0,bq = 0,cq = 0;
	printf("Enter three positive integers:\n");
	scanf("%d%d%d",& a,& b,& c);
	if (a > b) {
		ex = b;
		b = a;
		a = ex;
	}
	if (a > c) {
		ex = c;
		c = a;
		a = ex;
	}
	if (b > c) {
		ex = c;
		c = b;
		b = ex;
	}
	aq = a * a;
	bq = b * b;
	cq = c * c;
	if (aq + bq == cq) {
		printf("The three integers are the sides of a right triangle\n");
	}
	if (aq + bq != cq) {
		printf("The three integers are not the sides of a right triangle\n");
	}
	return 0;
}
