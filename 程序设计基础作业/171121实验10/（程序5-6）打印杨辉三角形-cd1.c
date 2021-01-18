#include <stdio.h> //cd
int main(void)
{
	int triangle [20][20],i,j,n;
	scanf("%d",& n);
	for (i = 0;i < n;i++) {
		triangle [i][0] = 1;
		triangle [i][i] = 1;
	
	for (j = i;j < n;j++) 
		triangle [i][j] = triangle [i - 1][j - 1] + triangle [i - 1][j];
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j <= i;j++) 
			printf("%6d",triangle [i][j]);
			
		printf("\n");
	}
	return 0;
} 
