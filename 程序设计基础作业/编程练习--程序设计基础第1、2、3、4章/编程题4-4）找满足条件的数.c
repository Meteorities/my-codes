#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i;
	scanf("%d",& n);
	for (i = 1;i <= n;i++) {
		if ((i * i) % 10 == i || (i * i) % 100 == i) {
			printf("%d\n",i);
		}
	}
	return 0;
}
