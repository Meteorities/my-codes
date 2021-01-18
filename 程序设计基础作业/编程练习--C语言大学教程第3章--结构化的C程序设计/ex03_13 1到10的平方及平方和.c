#include <stdio.h>
#include <math.h>
int main(void)
{
	int out = 0,i = 1,sum = 0;
	for ( ;i <= 10;i++) {
		out = i * i;
		printf("%d\n",out);
		sum = sum + out;
	}
	printf("Total is %d\n",sum);
	return 0;
}
