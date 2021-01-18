#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,out = 1;
	printf("Enter a positive integer:\n");
	scanf("%d",& n);
	for (i = 1;i <= n;i++) {
		out = out * i;
	}
	printf("%d! is %d",n,out);
	return 0;
}
