#include <stdio.h> //非数组解法 
int main(void)
{
	int m,n,i,j;
	printf("%s\n","Enter two unsigned integers in the range 1-20:");
	scanf("%d%d",& m,& n);
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			printf("%s","@");
		}
		printf("\n");
	}
	return 0;
} 
