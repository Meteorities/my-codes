#include <stdio.h>
int main(void)
{
	int i,out = 0;
	for (i = 2;i <= 30;i += 2) {
		out = out + i;
	}
	printf("Sum of the even integers from 2 to 30 is: %d\n",out);
	return 0;
}
