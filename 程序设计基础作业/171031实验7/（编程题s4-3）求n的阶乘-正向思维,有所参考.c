#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,out = 1;
	scanf("%d",& n);
	for (i = 1;i <= n;i++) {
		out = out * i;
	}
	printf("%d",out);
	return 0;
}
