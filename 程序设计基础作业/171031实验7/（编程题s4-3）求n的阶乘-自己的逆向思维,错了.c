#include <stdio.h>
#include <math.h>
int main(void)
{
	int n,i,out = 0;
	scanf("%d",& n);
	i = n;
	while (i >= 0) {
		out = out + out;
		i--;
		out = n * i;
	}
	printf("%d",out);
	return 0;
}
