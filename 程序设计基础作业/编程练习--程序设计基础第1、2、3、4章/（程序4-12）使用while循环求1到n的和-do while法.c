#include <stdio.h>
#include <math.h>
int main(void)
{
	int n = 0,i = 1,sum = 0;
	scanf("%d",&n);
	do {
		sum = sum + i;
		i++;
	}
	while (i <= n); //注意这里也有英文分号！ 
	printf("%d",sum);
	return 0;
}
