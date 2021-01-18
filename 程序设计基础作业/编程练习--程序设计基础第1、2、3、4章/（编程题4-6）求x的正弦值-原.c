#include <stdio.h>
#include <math.h>
int main(void)
{
	double x,out = 0,n = 1,n1 = 1;
	int i,j;
	scanf("%lf",& x); 
	for (i = 1;fabs(n1) >= 1e-8;i = i + 2) {
		for (j = 1;j <= i;j++) {
			n = n * i;
			n1 = pow(-1,j) * pow(x,i) / n;
			out = out + n1;
		}
	}
	printf("%.2f\n",out);
	return 0;
}
