#include <stdio.h> //数组解法
int main(void)
{
	int i,j,m,n;
	printf("%s\n","Enter two unsigned integers in the range 1-20:");
	scanf("%d%d",& m,& n);
	char go [m][n];
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			go [i][j] = '@';
		}
	}
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			printf("%s",go [i][j]);
		}
		printf("\n");
	}
	return 0;
} 
