#include <stdio.h>
int main(void)
{
	int i,j,k,n;
	scanf("%d",& n);
	for (i = 1;i <= n;i++) {
		for (k = 1;k < (n * 2 - i * 2);k++) {
			printf(" ");
		}for (j = 1;j < (i * 2);j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
