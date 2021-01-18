#include <stdio.h>
#include <math.h>
int main(void)
{
	int n = 0,i,sum = 0;
	scanf("%d",&n);
	for(i = 1;i <= n;i++)
		 sum = sum + i;
	printf("%d",sum);
	return 0;
}
