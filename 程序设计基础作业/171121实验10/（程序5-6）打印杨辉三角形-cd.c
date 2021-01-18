#include<stdio.h>
#define N 20
int main (void) {
	int number [N][N],i,j,n;
	scanf("%d",& n);
	for(i = 0;i < n;i++){
		number [i][0] = 1;
		number [i][i] = 1;
	for(j = 1;j < i;j++)
	number [i][j] = number [i - 1][j - 1]+number [i - 1][j];
}
	for(i = 0;i < n;i++){
		for(j = 0;j <= i;j++)
			printf("%6d",number [i][j]);
	printf("\n");
}
	return 0;
} 
