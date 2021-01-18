#include <stdio.h>
#include <math.h>
int main(void)
{
	int n = 0,i = 1,sum = 0;
	scanf("%d",&n);
	while (i <= n) {
		sum = sum + i;
		i++;
	}
	printf("%d",sum);
	return 0;
}
