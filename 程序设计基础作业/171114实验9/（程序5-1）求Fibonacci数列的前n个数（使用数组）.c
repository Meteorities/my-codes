#include <stdio.h>
#include <math.h>
int main(void)
{
	int fibon [40],n,i;
	scanf("%d",& n);
	fibon [0] = 1;
	fibon [1] = 1;
	printf("%d %d ",fibon [0],fibon [1]);
	for (i = 2;i < n;i++) {
		if (i % 5 == 0) {
			printf("\n");
		} 
		fibon [i] = fibon [i - 1] + fibon [i - 2];
		printf("%d ",fibon [i]);
	}
	return 0;
}
