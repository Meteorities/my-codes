#include <stdio.h>
int main(void)
{
	int n,result = 1;
	printf("%-8s%-14s\n","n","Factorial of n");
	for (n = 1;n <= 5;n++) {
		result = result * n;
		printf("%-8d%-14d\n",n,result);
	}
	return 0;
}
