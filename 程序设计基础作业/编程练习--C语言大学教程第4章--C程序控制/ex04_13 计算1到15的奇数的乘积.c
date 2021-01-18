#include <stdio.h>
int main(void)
{
	int i,out = 1;
	for (i = 1;i <= 15;i += 2) {
		out = out * i;
	}
	printf("Product of the odd integers from 1 to 15 is: %d\n",out);
	return 0;
}
