#include <stdio.h>
#include <math.h>
int main(void)
{
	int i = 1,sum = 0;
	while (i <= 10) {
		sum = sum + i;
		i++;
	}
	printf("The sum is: %d\n",sum);
	return 0;
}
