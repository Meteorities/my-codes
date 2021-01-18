#include <stdio.h>
int main(void)
{
	int a,b,judge;
	printf("Input two integers:\n");
	scanf("%d%d", &a, &b);
	judge = a % b;
	if (judge == 0) {
		printf("%d is a multiple of %d",a,b);
	}
	if (judge != 0) {
		printf("%d is not a multiple of %d",a,b);
	}
	return 0;
}
