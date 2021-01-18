#include <stdio.h>
#include <math.h>
int main(void)
{
	double pi,element = 1.0,sum = 0.0,a = 1.0,b = 1.0;
	while (4 * fabs(element) >= 1E-7) {
		sum += element;
		a = -a;
		b += 2;
		element = a / b;
	}
	pi = 4 * sum;
	printf("%.5f\n",pi);
	return 0;
}
