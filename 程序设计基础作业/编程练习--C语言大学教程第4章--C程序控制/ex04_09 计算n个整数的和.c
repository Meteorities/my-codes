#include <stdio.h>
int main(void)
{
	int n,i,sum = 0,transfer = 0;
	scanf("%d",& n);
	for (i = 0;i < n;i++) {
		scanf("%d",& transfer);
		sum += transfer;
	}
	printf("%d",sum);
	return 0;
}
