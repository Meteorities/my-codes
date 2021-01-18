#include <stdio.h>
#include <math.h>
int main (void)
{
	int n;
	printf("N      10 * N     100 * N    1000 * N\n");
	for (n = 1;n < 10;n++) {
		printf("           %d          %d         %d        %d\n",n,10 * n,100 * n,1000 * n);
	}
	printf("          10         100        1000       10000\n");
	return 0;
}
