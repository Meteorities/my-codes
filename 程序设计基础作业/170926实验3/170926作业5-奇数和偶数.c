#include <stdio.h>
int main(void)
{
	int n,judge;
	printf("Input an integer:\n");
	scanf("%d",& n);
	judge = n % 2;
	if (judge != 0) printf("%d is an odd integer\n",n);
	if (judge == 0) printf("%d is an even integer\n",n);
	return 0;
}
