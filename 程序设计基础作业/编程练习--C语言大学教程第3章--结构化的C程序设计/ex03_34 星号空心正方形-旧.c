#include <stdio.h>
int main(void)
{
	int n = 0,i = 0,i1 = 0,j;
	printf("Enter the square side:\n");
	scanf("%d",& n);
	for ( ;i < n;i++) {
		printf("*");
	}
	printf("\n");
	printf("*");
	for (j = 1;j < n;j++) {
		for ( ;i1 < (n - 2);i1++) {
		printf(" ");
	}
		printf("*");
		printf("\n");
		for ( ;i < n;i++) {
		printf("*");
	}
	}
	return 0;
}
