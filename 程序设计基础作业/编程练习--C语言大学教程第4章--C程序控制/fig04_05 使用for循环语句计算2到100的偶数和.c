#include <stdio.h>
int main(void)
{
	int i,out = 0;
	for (i = 2;i <= 100;i += 2) {
		out = out + i;
	}
	printf("Sum is %d\n",out);
	return 0;
}
